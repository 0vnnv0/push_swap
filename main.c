/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:44:31 by anschmit          #+#    #+#             */
/*   Updated: 2024/08/07 13:04:30 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack *a_stack;
	t_stack	*b_stack;
	int		i;
	
	a_stack = malloc(sizeof(t_stack));
	b_stack = malloc(sizeof(t_stack));
	if (a_stack == NULL || b_stack == NULL)
		return(ft_printf("Speicherzuweisung fehlgeschlagen\n"), 1);
	a_stack->top = NULL;
	b_stack->top = NULL;
	i = argc / 2;
	while (i > 0)
	{
		push_print(a_stack, atoi(argv[i]));
		i--;
	}
	ft_printf("StackA vor swap_a:\n");
	print_stack(a_stack);
	swap_a(a_stack);
	ft_printf("StackA nach swap_a:\n");
	print_stack(a_stack);
	i = argc - 1;
	while (i > argc / 2)
	{
		push_print(b_stack, atoi(argv[i]));
		i--;
	}
	ft_printf("StackB vor swap:\n");
	print_stack(b_stack);
	swap_b(b_stack);
	ft_printf("StackB nach swap:\n");
	print_stack(b_stack);
	free(a_stack);
	free(b_stack);
	return (0);
}
