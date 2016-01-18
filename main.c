/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 17:49:25 by kvignau           #+#    #+#             */
/*   Updated: 2016/01/18 17:59:04 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int					main(int ac, char **av)
{
	int				fd;
	char			*line;

	fd = 0;
	line = NULL;
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			return (-1);
		while (get_next_line(fd, &line))
		{
			ft_putstr(line);
			free(line);
		}
	}
	else if (ac == 1)
	{
		ft_putnbr(get_next_line(0, &line));
	}
	return (0);
}
