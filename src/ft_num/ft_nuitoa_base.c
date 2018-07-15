/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkouris <nkouris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 13:51:22 by nkouris           #+#    #+#             */
/*   Updated: 2018/07/14 14:07:36 by nkouris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_num.h"
# include <stdio.h>

char		*ft_nuitoa_base(unsigned int n, int base, int length)
{
	static char	result[3];

	ft_bzero(result, 3);
	printf("incoming : %u\t", n);
	while (length)
	{
		result[--length] = BASEKEY[n % base];
		printf("the char : %c\t", BASEKEY[n % base]);
		n =  n / base;
	}
	printf("result : %s\n", result);
	return (result);
}
