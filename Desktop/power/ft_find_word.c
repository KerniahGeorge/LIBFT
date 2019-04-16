/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kergeorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 02:43:15 by kergeorg          #+#    #+#             */
/*   Updated: 2019/04/12 02:43:25 by kergeorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_find_word(const char *str, int i, char **ret, char c)
{
	int		l;
	int		spc;

	spc = 0;
	l = 0;
	while (*str == c)
	{
		str++;
		spc++;
	}
	while (str[l] && str[l] != c)
		l++;
	if (l > 0)
	{
		ret[i] = ft_strnew(l);
		ft_strncpy(ret[i], str, l);
	}
	return (spc + l);
}
