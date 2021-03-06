/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kergeorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 02:48:18 by kergeorg          #+#    #+#             */
/*   Updated: 2019/04/12 02:57:01 by kergeorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(const int c)
{
	int	x;

	x = 0;
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}
