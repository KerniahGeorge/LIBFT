/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kergeorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 15:39:49 by kergeorg          #+#    #+#             */
/*   Updated: 2019/04/11 21:00:55 by kergeorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*i;
	size_t			num;

	num = 0;
	i = (unsigned char *)b;
	while (num < len)
	{
		i[num] = c;
		num++;
	}
	return (b);
}
