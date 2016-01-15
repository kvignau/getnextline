/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:46:04 by kvignau           #+#    #+#             */
/*   Updated: 2016/01/07 10:43:33 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*tab;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (!tab || !s1)
		return (NULL);
	while (i < len)
	{
		tab[i] = s1[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
