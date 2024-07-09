/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:03:52 by dsedlets          #+#    #+#             */
/*   Updated: 2024/07/09 18:04:11 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	m;

	m = count * size;
	if (size && m >= SIZE_MAX / size)
		return (NULL);
	p = malloc(m);
	if (p && size)
		ft_bzero(p, m);
	return (p);
}
