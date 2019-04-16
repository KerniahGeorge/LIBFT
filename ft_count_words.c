/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kergeorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 02:42:28 by kergeorg          #+#    #+#             */
/*   Updated: 2019/04/12 02:42:38 by kergeorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(const char *s, int i, char c)
{
	int w;

	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			w++;
		while (s[i] != c && s[i])
			i++;
	}
	return (w);
}
