/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getopts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkouris <nkouris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:36:48 by nkouris           #+#    #+#             */
/*   Updated: 2018/07/09 16:48:13 by nkouris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* this implementation of get opts accepts an object of the style:
**	t_opt[] = {
**			"-[opt]:", [nparams], &handling_function,
**			|| "--[optstring]:", [nparams], &handling_function,
** 			etc
** 	}
** whose elements correspond to options that are valid in the calling program
** ft_getopts will return the position of an illegal option found and set
** optstring to NULL; it will return EXIT_SUCCESS and point opstring to the 
** corresponding valid
*/

#include "ft_getopts.h"

static inline __attribute__((always_inline)) int32_t 
			match_opts(t_opts *opts, char *argv)
{
	int32_t	i;

	i = 0;
	while (*argv)
	{
		while (opts->opt)
		{
			if (ft_strequ(opts->opt, argv))
			{
				if (opts->handler() == EXIT_FAILURE)
				{
					ft_printf("fail\n");
					return (EXIT_FAILURE);
				}
				else
					return (EXIT_SUCCESS);
			}
			opts++;
		}
		argv++;
	}
	return (EXIT_FAILURE);
}

int32_t		ft_getopts(t_opts *opts, char *argv)
{
	int32_t	i;

	i = 1;
	while (IS_WHSPC(*(argv)))
		argv++;
	if (*argv == '-')
	{
		argv++;
		if (match_opts(opts, argv) == EXIT_FAILURE)
			return (EXIT_FAILURE);
	}
	else
		return (-1);
	return (EXIT_SUCCESS);
}
