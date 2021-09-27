/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 12:32:53 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/27 18:16:15 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		count;
	int		d;
	char	c;
	char	*s;

	// printf("This program was called with \"%s\".\n", argv[0]);
	if (argc > 1)
	{
		count = 1;
		while (count < argc)
		{
			// printf("argv[%d] = %s\n", count, argv[count]);
			count++;
		}
	}
	else
	{
		// printf("The command had no others arguments.\n");
	}
	c = 'x';
	ft_printf("coucou %c", c);
	s = "bonjour";
	ft_printf("%s", s);
	d = 1;
	ft_printf("%d", d);
	return (0);
}
