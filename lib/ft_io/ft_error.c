/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkouris <nkouris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 15:02:08 by nkouris           #+#    #+#             */
/*   Updated: 2018/03/13 15:14:46 by nkouris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

int		ft_error(void)
{
	perror(strerror(errno));
	return (1);
}
