/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbwords.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:35:13 by kvignau           #+#    #+#             */
/*   Updated: 2015/11/30 11:39:33 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_nbwords(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		ok;

	i = 0;
	j = 0;
	ok = 1;
	while (s[i])
	{
		if (s[i] != c && ok)
		{
			ok = 0;
			j++;
		}
		else if (s[i] == c)
			ok = 1;
		i++;
	}
	return (j);
}
