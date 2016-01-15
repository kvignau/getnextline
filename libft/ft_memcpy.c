/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:26:09 by kvignau           #+#    #+#             */
/*   Updated: 2015/11/25 15:13:48 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*strsrc;
	unsigned char	*strdst;
	size_t			i;

	i = 0;
	strsrc = (unsigned char *)src;
	strdst = (unsigned char *)dst;
	while (i < n)
	{
		strdst[i] = strsrc[i];
		i++;
	}
	return (dst);
}
