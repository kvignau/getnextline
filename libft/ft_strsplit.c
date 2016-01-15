/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:13:48 by kvignau           #+#    #+#             */
/*   Updated: 2015/12/01 14:18:46 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_strlencar(char const *s, char c, int i)
{
	int		len;

	len = i;
	while (s[len] && s[len] != c)
		len++;
	return (len - i);
}

static char			*ft_stradd(char const *s, char c, int i)
{
	char			*word;
	int				len;
	int				j;

	j = 0;
	len = ft_strlencar(s, c, i);
	word = ft_strnew(len + 1);
	while (s[i] && j < len)
	{
		word[j] = s[i + j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**tab;
	int				j;
	int				i;
	int				ok;

	ok = 1;
	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_nbwords(s, c) + 1));
	while (s[i])
	{
		if (s[i] != c && ok)
		{
			ok = 0;
			tab[j++] = ft_stradd(s, c, i);
		}
		else if (s[i] == c)
			ok = 1;
		i++;
	}
	tab[j] = 0;
	return (tab);
}
