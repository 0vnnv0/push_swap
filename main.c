/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:44:31 by anschmit          #+#    #+#             */
/*   Updated: 2024/08/12 17:20:50 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a_stack;
	t_stack	*b_stack;
	
	if (argc < 2)
		return (-1);
	validation(argc, argv);
	a_stack = malloc(sizeof(t_stack));
	b_stack = malloc(sizeof(t_stack));
	a_stack->top = NULL;
	b_stack->top = NULL;
	ft_init_stack(a_stack, argc, argv);
	if (ft_is_sorted(a_stack) == 1)
	{
			free_stack(a_stack);
			free_stack(b_stack);
			return (0);
	}
	else 
		ft_sort_stack(a_stack/*, b_stack*/);
}
