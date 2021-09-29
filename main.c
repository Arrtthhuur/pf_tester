/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 12:32:53 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/29 20:16:14 by abeznik       ########   odam.nl         */
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
	int		x;
	int     i;
	void	*p;
	char	*test = "hallo";

	/* %c WORKING */
	c = 'x';
	// ft_printf("coucou %c", c);
	// printf("\nexpected: ");
	// printf("coucou %c", c);
	// ft_printf("coucou %c salut", c);
	// printf("\nexpected: ");
	// printf("coucou %c salut", c);

	/* %s WORKING */
	s = "bonjour";
	// ft_printf("coucou %s salut\n", s);
	// printf("expected: ");
	// printf("coucou %s salut\n", s);
	// ft_printf("coucou %s salut %s\n", s, s);
	// printf("\texpected:\n");
	// printf("coucou %s salut %s\n", s, s);

	/* %d  WORKING */
	d = 1;
	// ft_printf("nb: %d oui oui", d);
	// printf("\nexpected: ");
	// printf("nb: %d oui oui", d);

	/* %x WORKING */
	x = 12;
	// ft_printf("x: %x\n", x);
	// printf("\texpected: \n");
	// printf("x: %x\n", x);
	// printf("\n");
	
	/* %X WORKING */
	// ft_printf("x: %X\n", x);
	// printf("\texpected: \n");
	// printf("x: %X\n", x);
	
	/* %i WORKING */
	// i = 100;
	// ft_printf("i: %i\n", i);
	// printf("\texpected: \n");
	// printf("i: %i\n", i);
	
	/* %% WORKING */
	ft_printf("%%\n");
	printf("\texpected: \n");
	printf("%%\n");
	
	/* %p NOT WORKING */
	// printf("%p\n", &test);
	// ft_printf("%p\n", &test);
	// ft_printf("p: %p oui oui", p);
	// printf("\texpected: \n");
	// printf("p: %p oui oui", p);

	/* intensive test */
	// ft_printf("bonjour %c salut %s aurevoir %d heyo %x wayo %X\n", c, s, d, x, x);
	// printf("\texpected: \n");
	// printf("bonjour %c salut %s aurevoir %d heyo %x wayo %X\n", c, s, d, x, x);

	return (0);
}
