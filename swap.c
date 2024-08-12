/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:06:09 by anschmit          #+#    #+#             */
/*   Updated: 2024/08/12 17:47:56 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *a_stack)
{
	int	temp;

	if (a_stack == NULL || a_stack->top == NULL || a_stack->top->next == NULL)
		return ;
	temp = a_stack->top->data;
	a_stack->top->data = a_stack->top->next->data;
	a_stack->top->next->data = temp;
}

void	swap_b(t_stack *b_stack)
{
	int	temp;

	if (b_stack == NULL || b_stack->top == NULL || b_stack->top->next == NULL)
		return ;
	temp = b_stack->top->data;
	b_stack->top->data = b_stack->top->next->data;
	b_stack->top->next->data = temp;
}

void	swap_both(t_stack *a_stack, t_stack *b_stack)
{
	swap_a(a_stack);
	swap_b(b_stack);
}

void	print_stack(t_stack *stack)
{
	t_node	*current;

	current = stack->top;
	while (current != NULL)
	{
		ft_printf("%d ", current->data);
		current = current->next;
	}
	ft_printf("\n");
}
