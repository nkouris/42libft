/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkouris <nkouris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 15:13:06 by nkouris           #+#    #+#             */
/*   Updated: 2017/09/27 13:08:40 by nkouris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*c_dst;
	const char		*c_src;

	i = 0;
	c_dst = (unsigned char*)dst;
	c_src = (const char*)src;
	while (i++ < n)
	{
		*c_dst = *c_src;
		c_dst++;
		c_src++;
	}
	return (dst);
}
