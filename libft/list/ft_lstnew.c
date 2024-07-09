/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:39:42 by dsedlets          #+#    #+#             */
/*   Updated: 2024/07/09 17:40:04 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_s	*ft_lstnew(int content)
{
	t_s	*tmp;

	tmp = (t_s *)malloc(sizeof(t_s));
	if (!tmp)
		return (NULL);
	tmp->num = content;
	tmp->next = NULL;
	return (tmp);
}
