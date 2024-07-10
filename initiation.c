/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initiation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:51:02 by dsedlets          #+#    #+#             */
/*   Updated: 2024/07/08 14:33:56 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	if_valid(char *str)
{
	long int	i;

	i = 0;
	if (str[i] == '-' && str[i + 1])
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			exit (1 && write(2, "Error\n", 7));
		}
		i++;
	}
	return (1);
}

int	uniq(int n, t_s *a)
{
	while (a)
	{
		if (a->num == n)
			exit (1 && write(2, "Error = uniq\n", 14));
		a = a->next;
	}
	return (1);
}

int	try_add(char *current_str, t_s **a)
{
	int	overflow;
	int	num;
	t_s	*new_node;

	overflow = 0;
	if (if_valid(current_str))
	{
		num = ft_atoi(current_str, &overflow);
		if (uniq(num, *a))
		{
			if (overflow)
				exit (1 && write(2, "Error = overflow\n", 18));
			if (!overflow)
			{
				new_node = ft_lstnew(num);
				if (!new_node)
					return (free_lst(a));
				ft_lstadd_back(a, new_node);
				return (1);
			}
		}
	}
	return (0);
}

int	init_a(char **av, t_s **a)
{
	int		i;
	int		j;
	char	**current_array;

	i = 1;
	if (!av[1])
		return (0);
	while (av[i])
	{
		current_array = ft_split(av[i], ' ');
		j = 0;
		while (current_array[j])
		{
			if (!try_add(current_array[j], a))
			{
				free_array(current_array);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
