/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 14:39:29 by rmangili          #+#    #+#             */
/*   Updated: 2015/01/04 00:26:54 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "get_next_line.h"
#include <unistd.h>
#include "libft.h"
#include <fcntl.h>

static int		get_read_size(char **str, int fd)
{
	int		i;
	char	buf[BUF_SIZE + 1];
	char	*s;

	i = read (fd, buf, BUF_SIZE);
	if (i == -1)
		return (-1);
	buf[i] = 0;
	s = *str;
	*str = ft_strjoin(*str, buf);
	if (*s != 0)
		free(s);
	return (i);
}

static int		get_fill_line(char **str, char **line, char *s)
{
	char	*zebre;
	int		i;

	i = 0;
	if (*s == '\n')
		i = 1;
	*s = 0;
	*line = ft_strjoin("", *str);
	zebre = *str;
	*str = ft_strjoin(s + 1, "");
	free(zebre);
	return (i);
}
int				get_next_line(int const fd, char **line)
{
	char		*s;
	static char	*str;
	int			i;

	if (str == 0)
		str = "";
	if (!line || BUF_SIZE < 1)
		return (-1);
	i = BUF_SIZE;
	while (1)
	{
		s = str;
		while (*s || i < BUF_SIZE)
		{
			if (*s == '\n' || *s == 0 || *s == -1)
				return (get_fill_line(&str, line, s));
			s++;
		}
		i = get_read_size(&str, fd);
		if (i == -1)
			return (-1);
	}
}
