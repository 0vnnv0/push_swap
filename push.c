/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:08:18 by anschmit          #+#    #+#             */
/*   Updated: 2024/08/13 16:34:55 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *a_stack, t_stack *b_stack)
{
	t_node	*temp;

	if (b_stack == NULL || b_stack->top == NULL)
		return ;
	temp = b_stack->top; 
	b_stack->top = b_stack->top->next;
	temp->next = a_stack->top;
	a_stack->top = temp;
	write(1, "pa\n", 3);
}

void	push_b(t_stack *a_stack, t_stack *b_stack)
{
	t_node	*temp;

	if (a_stack == NULL || a_stack->top == NULL)
		return ;
	temp = a_stack->top;
	a_stack->top = a_stack->top->next;
	temp->next = b_stack->top;
	b_stack->top = temp;
	write(1, "pb\n", 3);
}

// void	push_print(t_stack *a_stack, int value)
// {
// 	t_node *new_node = malloc(sizeof(t_node));

// 	if (new_node == NULL)
// 	{
// 		ft_printf("Speicherzuweisung fehlgeschlagen.\n");
// 		exit (1);
// 	}
// 	new_node->data = value;
// 	new_node->next = a_stack->top;
// 	a_stack->top = new_node;
// }
