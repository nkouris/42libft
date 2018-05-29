/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getopts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkouris <nkouris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:36:48 by nkouris           #+#    #+#             */
/*   Updated: 2018/05/29 16:46:48 by nkouris          ###   ########.fr       */
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
			param_action(t_opts *opts, char **argv, int32_t *word)
{
	int32_t	i;

	i = 0;
	if (!(opts->nparams))
	{
		if (opts->handler(*argv, NULL, opts) == EXIT_FAILURE)
			return (EXIT_FAILURE);
	}
	else
	{
		(*word)++;
		if (opts->handler(*argv, (argv + *word), opts) == EXIT_FAILURE)
			return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

static inline __attribute__((always_inline)) int32_t	
			match_opts(t_opts **opts, char **argv, int32_t *word)
{
	int32_t	i;

	i = 0;
	while (opts[i])
	{
		if (ft_strequ((opts[i])->opt, (argv[*word])))
		{
			if (param_action(opts[i], argv, word) == EXIT_FAILURE)
				return (EXIT_FAILURE);
			else
				return (EXIT_SUCCESS);
		}
		i++;
	}
	return (EXIT_FAILURE);
}

int32_t		ft_getopts(t_opts **opts, char **argv)
{
	int32_t	i;

	i = 0;
	while (argv[i])
	{
		while (IS_WHSPC(*(argv[i])))
			(argv[i])++;
		if (*(argv[i]) == '-')
		{
			(argv[i])++;
			if (*(argv[i]) == '-')
				(argv[i])++;
			if (match_opts(opts, argv, &i) == EXIT_FAILURE)
				return (i);
		}
	}
	return (EXIT_SUCCESS);
}
