/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkouris <nkouris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 13:51:22 by nkouris           #+#    #+#             */
/*   Updated: 2018/07/13 12:47:55 by nkouris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_num.h"
# include <stdio.h>

char		*ft_nuitoa_base(unsigned int n, int base, int length)
{
	char	*result;

	printf("incoming : %u\t", n);
	result = ft_strnew(length);
	if (!result)
		return (NULL);
	while (length)
	{
		result[--length] = BASEKEY[n % base];
		printf("the char : %c\t", BASEKEY[n % base]);
		n =  n / base;
	}
	printf("result : %s\n", result);
	return (result);
}
