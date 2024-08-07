/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:08:18 by anschmit          #+#    #+#             */
/*   Updated: 2024/08/06 18:29:50 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *a_stack, t_stack *b_stack)
{
	if (b_stack == NULL || b_stack->top == NULL)
		return ;
	a_stack->top->next = a_stack->top;
	a_stack->top = b_stack->top;
	b_stack->top = NULL;
}

void	push_print(t_stack *a_stack, int value)
{
	t_node *new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		{
			ft_printf("Speicherzuweisung fehlgeschlagen.\n");
			exit (1);
		}
	new_node->data = value;
	new_node->next = a_stack->top;
	a_stack->top = new_node;
}