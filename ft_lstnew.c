/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkouris <nkouris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 09:43:22 by nkouris           #+#    #+#             */
/*   Updated: 2017/09/28 21:06:59 by nkouris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*head;
	void	*v_content;

	if (!content)
		v_content = 0;
	else
		v_content = (void*)content;
	head = ft_memalloc(sizeof(t_list));
	if (!head)
		return (0);
	head->content = v_content;
	if (!content)
		content_size = 0;
	head->content_size = content_size;
	head->next = 0;
	return (head);
}
