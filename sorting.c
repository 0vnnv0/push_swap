/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:47:23 by anschmit          #+#    #+#             */
/*   Updated: 2024/08/15 13:41:19 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3(t_stack *a_stack)
{
	int	first;
	int	second;
	int	third;

	first = a_stack->top->data;
	second = a_stack->top->next->data;
	third = a_stack->top->next->next->data;
	if (first > second && second > third)
	{
		rotate_a(a_stack);
		swap_a(a_stack);
	}
	else if (first < second && third < second && first > third)
		rr_a(a_stack);
	else if (first > second && second < third && first < third)
		swap_a(a_stack);
	else if (first < second && second > third && first < third)
	{
		swap_a(a_stack);
		rotate_a(a_stack);
	}
	else if (first > second && second < third && first > third)
		rotate_a(a_stack);
}

void	ft_sort_4(t_stack *a_stack, t_stack *b_stack)
{
	int	min_pos;

	min_pos = find_min_position(a_stack);
	if (min_pos == 1)
		swap_a(a_stack);
	if (min_pos == 2)
	{
		rr_a(a_stack);
		rr_a(a_stack);
	}
	if (min_pos == 3)
		rr_a(a_stack);
	push_b(a_stack, b_stack);
	ft_sort_3(a_stack);
	push_a(a_stack, b_stack);
}

void	ft_sort_5(t_stack *a_stack, t_stack *b_stack)
{
	int	min_pos;

	min_pos = find_min_position(a_stack);
	if (min_pos == 1)
		swap_a(a_stack);
	else if (min_pos == 2)
	{
		rotate_a(a_stack);
		rotate_a(a_stack);
	}
	else if (min_pos == 3)
	{
		rr_a(a_stack);
		rr_a(a_stack);
	}
	else if (min_pos == 4)
		rr_a(a_stack);
	push_b(a_stack, b_stack);
	ft_sort_4(a_stack, b_stack);
	push_a(a_stack, b_stack);
}

void	ft_sort_stack(t_stack *a_stack, t_stack *b_stack)
{
	int	size;

	size = ft_stacksize(a_stack);
	if (!a_stack)
		return ;
	if (size == 2)
		rotate_a(a_stack);
	else if (size == 3)
		ft_sort_3(a_stack);
	else if (size == 4)
		ft_sort_4(a_stack, b_stack);
	else if (size == 5)
		ft_sort_5(a_stack, b_stack);
	else
	{
		set_index(a_stack);
		ft_radix(a_stack, b_stack, size);
	}
}
