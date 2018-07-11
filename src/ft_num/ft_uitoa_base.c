/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkouris <nkouris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 13:51:22 by nkouris           #+#    #+#             */
/*   Updated: 2018/07/10 17:04:31 by nkouris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_num.h"

static int		count_num_base(unsigned long n, unsigned long base)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / base;
		len++;
	}
	return (len);
}

char		*ft_uitoa_base(unsigned int n, int base)
{
	int		length;
	char	*result;

	length = count_num_base(n, base);
	result = ft_strnew(length);
	if (!result)
		return (NULL);
	else if (n == 0)
		result[0] = '0';
	while (n > 0)
	{
		result[--length] = BASEKEY[n % base];
		n =  n / base;
	}
	return (result);
}
