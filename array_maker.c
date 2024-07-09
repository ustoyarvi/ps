/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_maker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:57:35 by dsedlets          #+#    #+#             */
/*   Updated: 2024/07/08 15:56:06 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_length(t_s *a)
{
	t_s	*tmp;
	int	i;

	i = 0;
	tmp = a;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	do_bubble_sort_array(int *arr, t_s *a)
{
	int	len;
	int	i;
	int	tmp;

	len = list_lenght(a);
	while (--len)
	{
		i = 0;
		while (i < len)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
			i++;
		}
	}
}

int	*make_array(t_s *a)
{
	t_s	*tmp;
	int	len;
	int	*array;
	int	i;

	i = 0;
	len = list_lenght(a);
	array = malloc(sizeof(int) * len);
	tmp = a;
	while (tmp)
	{
		array[i] = tmp->num;
		tmp = tmp->next;
		i++;
	}
	do_bubble_sort_array(array, a);
	return (array);
}

void	make_indexes_for_struct(t_s *a)
{
	t_s	*tmp;
	int	*arr;
	int	i;
	int	len;

	len = list_lenght(a);
	arr = make_array(a);
	tmp = a;
	while (a)
	{
		i = 0;
		while (i < len)
		{
			if (arr[i] == a->num)
			{
				a->index = i;
				break ;
			}
			i++;
		}
		a = a->next;
	}
	a = tmp;
}
