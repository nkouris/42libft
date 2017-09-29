/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkouris <nkouris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 10:47:53 by nkouris           #+#    #+#             */
/*   Updated: 2017/09/25 16:51:33 by nkouris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *ondeck;
	t_list *last;
	t_list *new;
	t_list *add;

	new = ft_lstnew(lst->content, lst->content_size);
	new = f(new);
	last = new;
	while (lst)
	{
		ondeck = lst->next;
		new->next = new;
		add = ft_lstnew(lst->content, lst->content_size);
		add = f(add);
		new = add;
		lst = ondeck;
	}
	return (last);
}
