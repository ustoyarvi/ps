/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:19:46 by dsedlets          #+#    #+#             */
/*   Updated: 2024/07/09 13:47:05 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_s **a, t_s **b)
{
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_s **a, t_s **b)
{
	push(a, b);
	write(1, "pb\n", 3);
}

void	push(t_s **from, t_s **to)
{
	t_s	*tmp_from;
	t_s	*tmp_to;

	tmp_from = *from;
	tmp_to = *to;
	*from = (*from)->next;
	*to = tmp_from;
	(*to)->next = tmp_to;
}

void	rb_ra(t_s **b, int how_many_times, int num)
{
	rotate(b, how_many_times);
	while (how_many_times)
	{
		if (num == 1)
			write(1, "rb\n", 3);
		else
			write(1, "ra\n", 3);
		how_many_times--;
	}
}

void	rotate(t_s **stack, int how_many_times)
{
	t_s	*new_start;
	t_s	*tail;

	while (how_many_times)
	{
		if ((*stack)->next)
		{
			new_start = (*stack)->next;
			tail = (*stack);
			while (tail && tail->next)
				tail = tail->next;
			tail->next = *stack;
			(*stack)->next = NULL;
			*stack = new_start;
		}
		how_many_times--;
	}
}
