/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:57:13 by anschmit          #+#    #+#             */
/*   Updated: 2024/08/12 17:39:22 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stacksize(t_stack *a_stack)
{
	t_node	*current;
	int		i;

	current = a_stack->top;
	i = 0;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}

t_node	*ft_newnode(int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

void	ft_stackadd_back(t_stack *stack, t_node *new_node)
{
	t_node	*current;

	if (!stack->top)
		stack->top = new_node;
	else
	{
		current = stack->top;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
}