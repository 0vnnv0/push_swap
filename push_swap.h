/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:42:16 by anschmit          #+#    #+#             */
/*   Updated: 2024/08/15 15:14:17 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "/home/anschmit/done/libft/includes/libft.h"
# include <stdlib.h>

typedef struct s_node
{
	int				data;
	int				index;
	struct s_node	*next;
}				t_node;

typedef struct s_stack 
{
	t_node	*top;
}				t_stack;

void	swap_a(t_stack *a_stack);
void	swap_b(t_stack *b_stack);

void	push_print(t_stack *a_stack, int value);
void	print_stack(t_stack *stack);

void	rotate_a(t_stack *a_stack);
void	rotate_b(t_stack *b_stack);
void	rotate_r(t_stack *a_stack, t_stack *b_stack);
void	rr_a(t_stack *a_stack);
void	rr_b(t_stack *b_stack);
void	rrr(t_stack *a_stack, t_stack *b_stack);

void	push_a(t_stack *a_stack, t_stack *b_stack);
void	push_b(t_stack *a_stack, t_stack *b_stack);

void	validation(int argc, char **argv);
int		ft_isnumber(char *nr);
int		ft_same_nr(int nr, char **args, int i);
void	ft_error(char *message);
void	free_split(char **arg);
int		ft_is_sorted(t_stack *a_stack);
void	ft_init_stack(t_stack *a_stack, int argc, char **argv);
void	free_stack(t_stack *a_stack);
t_node	*ft_newnode(int data);
void	ft_stackadd_back(t_stack *stack, t_node *new_node);
void	ft_sort_stack(t_stack *a_stack, t_stack *b_stack);
int		ft_stacksize(t_stack *a_stack);
void	ft_sort_3(t_stack *a_stack);
void	ft_sort_4(t_stack *a_stack, t_stack *b_stack);
void	ft_sort_5(t_stack *a_stack, t_stack *b_stack);
int		find_min_position(t_stack *a_stack);
void	ft_radix(t_stack *a_stack, t_stack *b_stack, int size);
void	set_index(t_stack *a_stack);
int		get_max_bits(int size);

#endif