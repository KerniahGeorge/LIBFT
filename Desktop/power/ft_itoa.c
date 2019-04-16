/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kergeorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 06:08:48 by kergeorg          #+#    #+#             */
/*   Updated: 2019/04/12 03:52:47 by kergeorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int nbr)
{
	long	n;
	size_t	len;
	char	*s;

	n = nbr;
	len = (n > 0) ? 0 : 1;
	n = (n > 0) ? n : -n;
	while (nbr)
		nbr = len++ ? nbr / 10 : nbr / 10;
	if (!(s = (char *)malloc(sizeof(s) * len + 1)))
		return (NULL);
	*(s + len--) = '\0';
	while (n > 0)
	{
		*(s + len--) = n % 10 + '0';
		n /= 10;
	}
	if (len == 0 && s[1] == '\0')
		*(s + len) = '0';
	if (len == 0 && s[1] != '\0')
		*(s + len) = '-';
	return (s);
}
