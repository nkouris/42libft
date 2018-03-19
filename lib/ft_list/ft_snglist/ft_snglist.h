/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_snglist.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkouris <nkouris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 18:10:05 by nkouris           #+#    #+#             */
/*   Updated: 2018/03/18 18:12:32 by nkouris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SNGLIST_H
#define FT_SNGLIST_H

#include "ft_list.h"

void	ft_listadd(t_list **alst, void *content, size_t content_size);
t_list	*ft_listcritpop(t_list **node, int (*f)(void *));
t_list	*ft_listnew(void *content, size_t content_size);
t_list	*ft_sublistpop(t_list **node, int (*f)(void *));

#endif
