/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:56:56 by anschmit          #+#    #+#             */
/*   Updated: 2024/08/08 15:18:45 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack *a_stack)
{
	t_node	*current;

	current = a_stack->top;
	if (a_stack == NULL || a_stack->top == NULL)
		return ;
	while (current->next != NULL)
		current = current->next;
	current->next = a_stack->top;
	a_stack->top = a_stack->top->next;
	current->next->next = NULL;
}

void	rotate_b(t_stack *b_stack)
{
	t_node	*current;

	current = b_stack->top;
	if (b_stack == NULL || b_stack->top == NULL)
		return ;
	while (current->next != NULL)
		current = current->next;
	current->next = b_stack->top;
	b_stack->top = b_stack->top->next;
	current->next->next = NULL;
}

void	rotate_r(t_stack *a_stack, t_stack *b_stack)
{
	rotate_a(a_stack);
	rotate_b(b_stack);
}