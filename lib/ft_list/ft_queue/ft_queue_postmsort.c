/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_postmsort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkouris <nkouris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 17:31:44 by nkouris           #+#    #+#             */
/*   Updated: 2018/03/18 17:32:58 by nkouris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_queue_postsort(t_queue *key)
{
	t_dblist	*temp;

	temp = key->first;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		key->last = temp;
	}
}

