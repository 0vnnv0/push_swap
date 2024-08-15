/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:57:13 by anschmit          #+#    #+#             */
/*   Updated: 2024/08/15 13:33:11 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_index(t_stack *a_stack)
{
	t_node	*current;
	t_node	*compare;
	int		index;

	current = a_stack->top;
	index = 0;
	while (current)
	{
		index = 0;
		compare = a_stack->top;
		while (compare)
		{
			if (current->data > compare->data)
				index++;
			compare = compare->next;
		}
		current->index = index;
		current = current->next;
	}
}

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
	new_node->index = 0;
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

int	find_min_position(t_stack *a_stack)
{
	t_node	*current;
	int		min_value;
	int		min_pos;
	int		current_pos;

	current = a_stack->top;
	min_value = current->data;
	min_pos = 0;
	current_pos = 0;
	while (current)
	{
		if (current->data < min_value)
		{
			min_value = current->data;
			min_pos = current_pos;
		}
		current = current->next;
		current_pos++;
	}
	return (min_pos);
}
