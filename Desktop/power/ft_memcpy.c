/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kergeorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 17:04:07 by kergeorg          #+#    #+#             */
/*   Updated: 2019/03/27 02:41:44 by kergeorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*in;
	char	*out;
	size_t	c;

	c = 0;
	in = (char *)src;
	out = (char *)dst;
	while (c < n)
	{
		out[c] = in[c];
		c++;
	}
	return (dst);
}
