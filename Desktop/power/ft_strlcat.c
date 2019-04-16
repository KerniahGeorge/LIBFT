/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kergeorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 03:03:50 by kergeorg          #+#    #+#             */
/*   Updated: 2019/04/12 14:39:05 by kergeorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;

	l = 0;
	while (dst[l] && l < dstsize)
	{
		l++;
	}
	i = l;
	while (l + 1 < dstsize && src[l - i])
	{
		dst[l] = src[l - i];
		l++;
	}
	if (i < dstsize)
		dst[l] = '\0';
	return (i + ft_strlen(src));
}
