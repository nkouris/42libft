/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblist.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkouris <nkouris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 17:59:04 by nkouris           #+#    #+#             */
/*   Updated: 2018/03/18 18:05:41 by nkouris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DBLIST_H
#define FT_DBLIST_H

#include "ft_list.h"

t_dblist	*ft_dblistnew(void *content, size_t content_size);
t_dblist	*ft_dblistpop(t_dblist *node);
t_dblist	*ft_dblmergesort(t_dblist *head, int (*f)(void *, void *));

#endif
