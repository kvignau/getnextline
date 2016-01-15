/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 15:31:49 by kvignau           #+#    #+#             */
/*   Updated: 2016/01/15 16:16:06 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void			ft_restline(char **reste, char *buf)
{
	if (*reste)
	{
		*reste = ft_strjoin(*reste, buf);
	}
	else
		*reste = ft_strdup(buf);
}

static int			ft_getline(char **reste, char **line)
{

	char			*tmp;

	tmp = ft_strchr(*reste, '\n');
	if (tmp)
	{
		*line = ft_strsub(*reste, 0, tmp - *reste);
		ft_memmove(*reste, tmp + 1, ft_strlen(tmp));
		tmp = NULL;
		return (1);
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	int			ret;
	static char		*reste = NULL;

	if (!line)
		return (-1);
	if (reste && ft_getline(&reste, line))
		return (1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		buf[ret] = '\0';
		ft_restline(&reste, buf);
		if (ft_getline(&reste, line))
			return (1);
	}
	*line = reste;
	reste = NULL;
	return (0);
}
