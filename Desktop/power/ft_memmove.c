/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kergeorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 03:12:10 by kergeorg          #+#    #+#             */
/*   Updated: 2019/03/29 03:31:57 by kergeorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*cd;
	const unsigned char	*cs;
	size_t				i;

	cd = dest;
	cs = src;
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			cd[i] = cs[i];
			i++;
		}
	}
	else if (dest > src)
	{
		while (n--)
			cd[n] = cs[n];
	}
	return (dest);
}
