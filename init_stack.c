/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:26:01 by anschmit          #+#    #+#             */
/*   Updated: 2024/08/12 17:35:11 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *a_stack)
{
	t_node	*current;
	t_node	*next_node;

	current = a_stack->top;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	free(a_stack);
}

void	ft_init_stack(t_stack *a_stack, int argc, char **argv)
{	
	t_node	*new_node;
	char	**args;
	int		i;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		args = argv;
		i = 1;
	}
	while (args[i])
	{
		new_node = ft_newnode(ft_atoi(args[i]));
		ft_stackadd_back(a_stack, new_node);
		i++;
	}
	if (argc == 2)
		free_split(args);
}

int	ft_is_sorted(t_stack *a_stack)
{
	t_node	*current;

	current = a_stack->top;
	while (current->next != NULL)
	{
		if (current->data > current->next->data)
			return (0);
		current = current->next;
	}
	return (1);
}