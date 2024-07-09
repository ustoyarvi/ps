/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:28:07 by dsedlets          #+#    #+#             */
/*   Updated: 2024/07/09 17:28:33 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	*strjoin1(const char *s1, const char *s2, char *new_line, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s1)
	{
		while (s1[i])
		{
			new_line[i] = s1[i];
			i++;
		}
	}
	while (s2[j] && size--)
	{
		new_line[i + j] = s2[j];
		j++;
	}
	new_line[i + j] = '\0';
	return (new_line);
}

char	*ft_strjoin_gnl(char *s1, const char *s2, int len)
{
	char	*new_line;

	if (s1)
		new_line = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	else
		new_line = malloc(sizeof(char) * (ft_strlen(s2) + 1));
	if (!new_line)
		return (NULL);
	strjoin1(s1, s2, new_line, len);
	return (new_line);
}
