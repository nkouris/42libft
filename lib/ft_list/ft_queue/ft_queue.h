/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkouris <nkouris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 15:32:06 by nkouris           #+#    #+#             */
/*   Updated: 2018/03/18 15:49:14 by nkouris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_QUEUE_H
#define FT_QUEUE_H

#include "ft_list.h"

typedef	struct	s_queue
{
	t_dblist	*first;
	t_dblist	*last;
	int			qlen;
	int			min;
	int			max;
}				t_queue;

int			ft_enqueue(t_queue **key, void *data, size_t size);
void		ft_pushfirst(t_queue *key, t_dblist *data)
void		ft_pushlast(t_queue *key, t_dblist *data)
t_dblist	*ft_popfirst(t_queue *key)
t_dblist	*ft_poplast(t_queue *key)

#endif
