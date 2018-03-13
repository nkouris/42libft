/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkouris <nkouris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 13:50:31 by nkouris           #+#    #+#             */
/*   Updated: 2018/02/14 13:50:49 by nkouris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_numlen(int num)
{
	int i;

	i = 0;
	if (num == -2147483648)
		return (10);
	if (num < 0)
		num = num * -1;
	while (num)
	{
		num = num / 10;
		i++;
	}
	return (i);
}