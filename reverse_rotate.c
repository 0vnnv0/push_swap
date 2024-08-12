/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:11:51 by anschmit          #+#    #+#             */
/*   Updated: 2024/08/08 17:11:19 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr_a(t_stack *a_stack)
{
	t_node	*current;
	t_node	*previous;

	previous = NULL;
	if (a_stack == NULL || a_stack->top == NULL || a_stack->top->next == NULL)
		return ;
	current = a_stack->top;
	while (current->next != NULL)
	{
		previous = current;
		current = current->next;
	}
	previous->next = NULL;
	current->next = a_stack->top;
	a_stack->top = current;
}

void	rr_b(t_stack *b_stack)
{
	t_node *current;
	t_node *previous;

	previous = NULL;
	if (b_stack == NULL || b_stack->top == NULL || b_stack->top->next == NULL)
		return ;
	current = b_stack->top;
	while (current->next != NULL)
	{
		previous = current;
		current = current->next;
	}
	previous->next = NULL;
	current->next = b_stack->top;
	b_stack->top = current;
}

void	rrr(t_stack *a_stack, t_stack *b_stack)
{
	rr_a(a_stack);
	rr_b(b_stack);
}