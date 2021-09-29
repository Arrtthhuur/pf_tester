/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 12:32:53 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/29 16:34:55 by abeznik       ########   odam.nl         */
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
	void	*p;

	/* %c */
	c = 'x';
	// ft_printf("coucou %c", c);
	// printf("\nexpected: ");
	// printf("coucou %c", c);
	// ft_printf("coucou %c salut", c);
	// printf("\nexpected: ");
	// printf("coucou %c salut", c);

	/* %s */
	s = "bonjour";
	// ft_printf("coucou %s salut\n", s);
	// printf("expected: ");
	// printf("coucou %s salut\n", s);
	// ft_printf("coucou %s salut %s\n", s, s);
	// printf("\texpected:\n");
	// printf("coucou %s salut %s\n", s, s);

	/* %d */
	d = 1;
	// ft_printf("nb: %d oui oui", d);
	// printf("\nexpected: ");
	// printf("nb: %d oui oui", d);

	/* %p */
	ft_printf("p: %p oui oui", p);
	printf("\nexpected: ");
	printf("p: %p oui oui", p);

	/* extensive test */
	// ft_printf("bonjour %c salut %s aurevoir %d\n", c, s, d);
	// printf("\texpected: \n");
	// printf("bonjour %c salut %s aurevoir %d\n", c, s, d);

	return (0);
}
