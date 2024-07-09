/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:06:08 by dsedlets          #+#    #+#             */
/*   Updated: 2024/07/09 18:06:27 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *buf, int c, size_t n)
{
	void	*str;

	str = buf;
	while (n--)
		*(unsigned char *)buf++ = (unsigned char)c;
	return (str);
}
