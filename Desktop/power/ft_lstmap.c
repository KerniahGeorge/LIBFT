/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kergeorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 00:35:39 by kergeorg          #+#    #+#             */
/*   Updated: 2019/04/12 03:59:56 by kergeorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*sf;
	t_list	*head;

	if (!lst)
		return (NULL);
	if (!(sf = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	sf = f(lst);
	head = sf;
	while (lst->next)
	{
		lst = lst->next;
		sf->next = f(lst);
		sf = sf->next;
	}
	return (head);
}
