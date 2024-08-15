/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:23:51 by anschmit          #+#    #+#             */
/*   Updated: 2024/08/15 15:28:53 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bits(int size)
{
	int	max_bits;
	int	max_num;

	max_bits = 0;
	max_num = size - 1;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	ft_radix(t_stack *a_stack, t_stack *b_stack, int size)
{
	int	max_bits;
	int	index;
	int	i;
	int	j;

	max_bits = get_max_bits(size);
	index = a_stack->top->index;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			index = a_stack->top->index;
			if (((index >> i) & 1) == 0)
				push_b(a_stack, b_stack);
			else
				rotate_a(a_stack);
		}
		while (ft_stacksize(b_stack) > 0)
			push_a(a_stack, b_stack);
		i++;
	}
}
