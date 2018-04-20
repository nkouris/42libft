/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkouris <nkouris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 17:29:39 by nkouris           #+#    #+#             */
/*   Updated: 2018/03/02 17:29:41 by nkouris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_num.h"

static int	skip_spaces(const char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' ||
			str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
	{
		i++;
	}
	return (i);
}

long		ft_atoi_long(const char *str)
{
	int		sign;
	int		i;
	long	j;

	sign = 1;
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i = skip_spaces(str);
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (str[i] == '+')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			j = (j * 10) + (str[i] - 48);
			i++;
		}
		return (j * sign);
	}
	return (0);
}
