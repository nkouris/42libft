/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_enqueue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkouris <nkouris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 15:20:46 by nkouris           #+#    #+#             */
/*   Updated: 2018/04/20 13:16:57 by nkouris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
**		Using a doubly linked list, as defined in libft.h
**				|
**				first -> (next)
**				(next)
**				.
**				.
**				.
**				.
**				.
**				(prec)
**				last -> (prec)
**				|
*/

int			ft_enqueue(t_queue **key, void *data, size_t size)
{
	t_dblist	*add;

	if (!(add = ft_dblistnew(data, size)))
		return (0);
	if (!(*key)->first)
		ft_pushfirst(*key, add);
	else
		ft_pushlast(*key, add);
	return (1);
}
