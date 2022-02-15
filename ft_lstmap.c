/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oholgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:57:53 by oholgado          #+#    #+#             */
/*   Updated: 2021/07/01 15:03:49 by oholgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new;
	t_list	*old;

	if (!lst)
		return (NULL);
	new_list = ft_lstnew((*f)(lst -> content));
	if (!new_list)
		return (NULL);
	new = new_list;
	old = lst -> next;
	while (1)
	{
		if (old == NULL)
			break ;
		new -> next = ft_lstnew((*f)(old -> content));
		if (!new)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		new = new -> next;
		old = old -> next;
	}
	return (new_list);
}
