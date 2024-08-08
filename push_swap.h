/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:42:16 by anschmit          #+#    #+#             */
/*   Updated: 2024/08/08 14:57:52 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "/home/anschmit/done/libft/includes/libft.h"
# include <stdlib.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}				t_node;

typedef struct s_stack 
{
	t_node	*top;
} 				t_stack;


void	swap_a(t_stack *a_stack);
void	swap_b(t_stack *b_stack);

void	push_print(t_stack *a_stack, int value);
void 	print_stack(t_stack *stack);

void	rotate_a(t_stack *a_stack);
void	rotate_b(t_stack *b_stack);

void	push_a(t_stack *a_stack, t_stack *b_stack);
void	push_b(t_stack *a_stack, t_stack *b_stack);

#endif