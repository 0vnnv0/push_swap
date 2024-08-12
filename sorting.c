/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:47:23 by anschmit          #+#    #+#             */
/*   Updated: 2024/08/12 17:43:15 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort_stack(t_stack *a_stack/*, t_stack *b_stack*/)
{
	if (!a_stack)
		return ;
	int size = ft_stacksize(a_stack);
	if (ft_stacksize(a_stack) == 2)
	{
		rotate_a(a_stack);
	}
}