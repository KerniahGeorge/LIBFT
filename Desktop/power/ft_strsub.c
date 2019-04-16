/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kergeorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 04:19:21 by kergeorg          #+#    #+#             */
/*   Updated: 2019/04/12 14:48:28 by kergeorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*st;
	size_t	i;

	if (!s)
		return (NULL);
	st = (char *)malloc(sizeof(char) * (len + 1));
	if (!st)
		return (NULL);
	i = 0;
	while (i < len)
	{
		st[i] = s[i + start];
		i++;
	}
	st[i] = '\0';
	return (st);
}
