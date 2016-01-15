/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:09:55 by kvignau           #+#    #+#             */
/*   Updated: 2015/12/01 14:26:20 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	size;
	size_t	len;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		i++;
	len = ft_strlen(s + i);
	len--;
	while ((s[len + i] == ' ' || s[len + i] == '\n' ||
				s[len + i] == '\t') && s[i])
		len--;
	size = ft_strlen(s + i);
	size = size - (size - len);
	str = ft_strnew(size + 1);
	ft_strncpy(str, s + i, size + 1);
	return (str);
}
