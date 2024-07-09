/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   almost_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:12:58 by dsedlets          #+#    #+#             */
/*   Updated: 2024/07/08 18:36:38 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	almost_sorted(t_s **a)
{
	t_s	*tmp;
	int	i;

	i = 0;
	tmp = *a;
	while (tmp && tmp->index != 0)
	{
		i++;
		tmp = tmp->next;
	}
	if (i <= list_length(*a) / 2)
		rb_ra(a, i, 0);
	else
		rrb_rra(a, list_length(*a) - i, 0);
	exit (1);
}
