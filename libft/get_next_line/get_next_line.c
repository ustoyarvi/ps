/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:26:38 by dsedlets          #+#    #+#             */
/*   Updated: 2024/07/09 17:27:33 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	make_line(char **line, char *buffer)
{
	char	*line_p;
	char	*tmp;

	line_p = ft_strchr(buffer, '\n');
	if (line_p)
	{
		tmp = *line;
		*line = ft_strjoin_gnl(*line, buffer, line_p - buffer + 1);
		free(tmp);
		ft_strlcpy(buffer, line_p + 1, BUFFER_SIZE);
		return (1);
	}
	tmp = *line;
	*line = ft_strjoin_gnl(*line, buffer, ft_strlen(buffer));
	free(tmp);
	return (0);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	int			bytes;
	char		*line;

	if (fd < 0)
		return (NULL);
	line = NULL;
	bytes = 1;
	while (bytes > 0)
	{
		if (make_line(&line, buffer))
			return (line);
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
		{
			free(line);
			return (NULL);
		}
		buffer[bytes] = '\0';
	}
	if (line && *line)
		return (line);
	free(line);
	return (NULL);
}
