/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:56:56 by anschmit          #+#    #+#             */
/*   Updated: 2024/08/12 17:40:29 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack *a_stack)
{
	t_node	*current;
	t_node	*first;

	if (a_stack == NULL || a_stack->top == NULL || a_stack->top->next == NULL)
		return ;
	first = a_stack->top;
	current = a_stack->top->next;
	while (current->next != NULL)
		current = current->next;
	current->next = first;
	first->next = NULL;
	write(1, "ra\n", 3);
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
	write(1, "rb\n", 3);
}

void	rotate_r(t_stack *a_stack, t_stack *b_stack)
{
	rotate_a(a_stack);
	rotate_b(b_stack);
}