/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:42:30 by dsedlets          #+#    #+#             */
/*   Updated: 2024/07/09 21:11:37 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char a;
	char b;

	a = '4';
	b = 'r';
	printf("%d \n", ft_isdigit(a));
	printf("%d \n", isdigit(a));
	printf("%d \n", ft_isdigit(b));
	printf("%d \n", isdigit(b));
	return(0);
}
*/
