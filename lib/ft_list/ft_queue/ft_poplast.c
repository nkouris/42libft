/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_poplast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkouris <nkouris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 15:28:12 by nkouris           #+#    #+#             */
/*   Updated: 2018/03/18 15:49:26 by nkouris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"

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

t_dblist	*ft_poplast(t_queue *key)
{
	t_dblist	*temp;

	if (!key)
		return (0);
	else
	{
		if (key->last)
		{
			key->qlen ? key->qlen-- : key->qlen;
			temp = key->last;
			key->last = key->last->prec;
			key->last ? key->last->next = 0 : key->last;
			temp->prec = 0;
			return (temp);
		}
	}
	return (0);
}
