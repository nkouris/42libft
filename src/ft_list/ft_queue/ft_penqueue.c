/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_penqueue.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkouris <nkouris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 14:38:12 by nkouris           #+#    #+#             */
/*   Updated: 2018/06/08 16:41:37 by nkouris          ###   ########.fr       */
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
**		of the two dblist void* contents of the, the one with precedence will 
**		be returned as it's parameter number (param [1] or param [2])
*/

static __attribute__((always_inline))int32_t	insertion_point(t_queue *key,
		int32_t (*f)(t_dblist *, t_dblist *), t_dblist *add)
{
	t_dblist	*temp;

	temp = key->first;
	while (temp)
	{
		if (f(temp, add) == 1)
			temp = temp->next;
		else
		{
			if (temp == key->first)
				ft_pushfirst(key, add);
			else
				ft_dblistinsert(temp, add);
		}
	}
	if (!temp)
		ft_pushlast(key, add);
	return (EXIT_SUCCESS);
}

int			ft_penqueue(t_queue *key, void *data, size_t size,
				int32_t (*f)(t_dblist *, t_dblist *))
{
	t_dblist	*add;

	if (size)
	{
		if (!(add = ft_dblistnew(data, size)))
			return (0);
	}
	else
		add = (t_dblist *)data;
	insertion_point(key, f, add);
	return (1);
}
