/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 23:20:44 by dsedlets          #+#    #+#             */
/*   Updated: 2024/07/09 18:56:48 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	space(int c)
{
	if ((c >= 9 && c <= 14) || (c == 32))
		return (1);
	return (0);
}

static int	digit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_atoi(const char *str, int *overflow)
{
	long int		n;
	long int		check;
	int				sign;

	n = 0;
	sign = 1;
	while (*str && space(*str))
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			sign *= -1;
		str++;
	}
	while (*str && digit(*str))
	{
		check = INT_MIN;
		n = n * 10 + sign * (*str - 48);
		if ((n > 2147483647) || (n < check))
			*overflow = 1;
		str++;
	}
	return (n);
}
