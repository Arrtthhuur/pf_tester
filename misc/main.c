/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 12:32:53 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/03 17:50:12 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"
#include "ANSI-color-codes.h"

#include <stdio.h>
#include <limits.h>

#define TEST_C
// #define TEST_S
// #define TEST_D
// #define TEST_I
// #define TEST_P
// #define TEST_LX
// #define TEST_X
// #define TEST_U
// #define TEST_PRO
#define TEST_ALL

int	main(void)
{
	int		d;
	char	c;
	char	*s;
	int		x;
	int     i;
	void	*p;

	c = 'c';
	s = "croissant";
	p = &s;
	d = -1;
	x = -12;
	i = -2;

#ifdef TEST_C

	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                TESTING c FORMAT CONVERSION               |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf(BHGRN "OFFICIAL\n" reset);
	printf(BHWHT "TIS MINE\n" reset);
	printf("\n");
	printf(BHBLU "|------------------------- TEST 1 -------------------------|\n" reset);
	printf(BHGRN "| coucou %c |\n" reset, 'x');
	ft_printf(BHWHT "| coucou %c |\n" reset, 'x');
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf(BHBLU "|------------------------- TEST 2 -------------------------|\n" reset);
	printf(BHGRN "| coucou %c moi %c toi |\n" reset, c, c);
	ft_printf(BHWHT "| coucou %c moi %c toi |\n" reset, c, c);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf(BHBLU "|------------------------- TEST 3 -------------------------|\n" reset);
	printf(BHGRN "| coucou %c%c%c%c |\n" reset, c, c, c, c);
	ft_printf(BHWHT "| coucou %c%c%c%c |\n" reset, c, c, c, c);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING c                    |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");

#endif

#ifdef TEST_S
	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                TESTING s FORMAT CONVERSION               |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf(BHBLU "|------------------------- TEST 1 -------------------------|\n" reset);
	printf(BHGRN "| bonjour un %s svp |\n" reset, s);
	ft_printf(BHWHT "| bonjour un %s svp |\n" reset, s);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 2 -------------------------|\n" reset);
	printf(BHGRN "| bonjour un %s svp. un quoi? un %s! |\n" reset, s, s);
	ft_printf(BHWHT "| bonjour un %s svp. un quoi? un %s! |\n" reset, s, s);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 3 -------------------------|\n" reset);
	printf(BHGRN "| bonjour %s%s%s%s!! |\n" reset, s, s, s, s);
	ft_printf(BHWHT "| bonjour %s%s%s%s!! |\n" reset, s, s, s, s);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 4 -------------------------|\n" reset);
	// printf(BHGRN "| %s aurevoir |\n" reset, NULL);
	// ft_printf(BHWHT "| %s aurevoir |\n" reset, NULL);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING s                    |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");

#endif

#ifdef TEST_D

	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                TESTING d FORMAT CONVERSION               |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf(BHBLU "|------------------------- TEST 1 -------------------------|\n" reset);
	printf(BHGRN "| %d baguette |\n" reset, 1);
	ft_printf(BHWHT "| %d baguette |\n" reset, 1);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 2 -------------------------|\n" reset);
	printf(BHGRN "| bonjour %d%d%d%d croissant svp %d |\n" reset, 1, 2, 3, 0, -1);
	ft_printf(BHWHT "| bonjour %d%d%d%d croissant svp %d |\n" reset, 1, 2, 3, 0, -1);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 3 -------------------------|\n" reset);
	printf(BHGRN "| %d aurevoir %d |\n" reset, INT_MAX, INT_MIN);
	ft_printf(BHWHT "| %d aurevoir %d |\n" reset, INT_MAX, INT_MIN);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 4 -------------------------|\n" reset);
	// printf(BHGRN "| %d merci |\n" reset, 1234567890123);
	// ft_printf(BHWHT "| %d merci |\n" reset, 1234567890123);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING d                    |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");

#endif

#ifdef TEST_I

	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                TESTING i FORMAT CONVERSION               |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf(BHBLU "|------------------------- TEST 1 -------------------------|\n" reset);
	printf(BHGRN "| salut %i |\n" reset, 1);
	ft_printf(BHWHT "| salut %i |\n" reset, 1);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 2 -------------------------|\n" reset);
	printf(BHGRN "| allo %i%i%i%i non mais allo quoi %d |\n" reset, 1, 2, 3, 0, -1);
	ft_printf(BHWHT "| allo %i%i%i%i non mais allo quoi %d |\n" reset, 1, 2, 3, 0, -1);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 3 -------------------------|\n" reset);
	printf(BHGRN "| %i j'suis pas venu ici pour souffrir %i |\n" reset, INT_MAX, INT_MIN);
	ft_printf(BHWHT "| %i j'suis pas venu ici pour souffrir %i |\n" reset, INT_MAX, INT_MIN);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 4 -------------------------|\n" reset);
	// printf(BHGRN "| %i merci |\n" reset, 1234567890123);
	// ft_printf(BHWHT "| %i merci |\n" reset, 1234567890123);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING i                    |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");

#endif

#ifdef TEST_U

	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                TESTING u FORMAT CONVERSION               |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf(BHBLU "|------------------------- TEST 1 -------------------------|\n" reset);
	printf(BHGRN "| positive dude %u |\n" reset, 1);
	ft_printf(BHWHT "| positive dude %u |\n" reset, 1);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 2 -------------------------|\n" reset);
	printf(BHGRN "| de negatif a positif %u |\n" reset, -1);
	ft_printf(BHWHT "| de negatif a positif %u |\n" reset, -1);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 3 -------------------------|\n" reset);
	printf(BHGRN "| %u okokokok |\n" reset, UINT_MAX);
	ft_printf(BHWHT "| %u okokokok |\n" reset, UINT_MAX);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 4 -------------------------|\n" reset);
	// printf(BHGRN "| %u merci |\n" reset, 1234567890123);
	// ft_printf(BHWHT "| %u merci |\n" reset, 1234567890123);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING i                    |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");

#endif

#ifdef TEST_LX

	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                TESTING x FORMAT CONVERSION               |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf(BHBLU "|------------------------- TEST 1 -------------------------|\n" reset);
	printf(BHGRN "| hex %x |\n" reset, 12);
	ft_printf(BHWHT "| hex %x |\n" reset, 12);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 2 -------------------------|\n" reset);
	printf(BHGRN "| %x stay low %x |\n" reset, 12, -42);
	ft_printf(BHWHT "| %x stay low %x |\n" reset, 12, -42);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 3 -------------------------|\n" reset);
	printf(BHGRN "| %x oui oui |\n" reset, UINT_MAX);
	ft_printf(BHWHT "| %x oui oui |\n" reset, UINT_MAX);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 4 -------------------------|\n" reset);
	// printf(BHGRN "| %x merci |\n" reset, 1234567890123);
	// ft_printf(BHWHT "| %x merci |\n" reset, 1234567890123);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING x                    |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");

#endif

#ifdef TEST_X

	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                TESTING X FORMAT CONVERSION               |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf(BHBLU "|------------------------- TEST 1 -------------------------|\n" reset);
	printf(BHGRN "| HEX %X |\n" reset, 12);
	ft_printf(BHWHT "| HEX %X |\n" reset, 12);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 2 -------------------------|\n" reset);
	printf(BHGRN "| %X stay high %X |\n" reset, 12, -42);
	ft_printf(BHWHT "| %X stay high %X |\n" reset, 12, -42);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 3 -------------------------|\n" reset);
	printf(BHGRN "| %X oui oui |\n" reset, UINT_MAX);
	ft_printf(BHWHT "| %X oui oui |\n" reset, UINT_MAX);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 4 -------------------------|\n" reset);
	// printf(BHGRN "| %X merci |\n" reset, 1234567890123);
	// ft_printf(BHWHT "| %X merci |\n" reset, 1234567890123);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING X                    |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");

#endif

#ifdef TEST_P

	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                TESTING p FORMAT CONVERSION               |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf(BHBLU "|------------------------- TEST 1 -------------------------|\n" reset);
	printf(BHGRN "| HEX %X |\n" reset, 12);
	ft_printf(BHWHT "| HEX %X |\n" reset, 12);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 2 -------------------------|\n" reset);
	printf(BHGRN "| %X stay high %X |\n" reset, 12, -42);
	ft_printf(BHWHT "| %X stay high %X |\n" reset, 12, -42);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 3 -------------------------|\n" reset);
	printf(BHGRN "| %X oui oui |\n" reset, UINT_MAX);
	ft_printf(BHWHT "| %X oui oui |\n" reset, UINT_MAX);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 4 -------------------------|\n" reset);
	// printf(BHGRN "| %X merci |\n" reset, 1234567890123);
	// ft_printf(BHWHT "| %X merci |\n" reset, 1234567890123);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING p                    |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");

#endif

#ifdef TEST_PRO

	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                TESTING %% FORMAT CONVERSION              |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf(BHBLU "|------------------------- TEST 1 -------------------------|\n" reset);
	printf(BHGRN "| hopa %% |\n" reset);
	ft_printf(BHWHT "| hopa %% |\n" reset);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 2 -------------------------|\n" reset);
	printf(BHGRN "| mmh %%%%%%%%%% |\n" reset);
	ft_printf(BHWHT "| mmh %%%%%%%%%% |\n" reset);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------------- TEST 3 -------------------------|\n" reset);
	printf(BHGRN "| %% oui %% oui %% |\n" reset);
	ft_printf(BHWHT "| %% oui %% oui %% |\n" reset);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING %%                   |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");

#endif

#ifdef TEST_ALL

	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|               TESTING ALL FORMAT CONVERSIONS             |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf(BHBLU "|------------------------- TEST 1 -------------------------|\n" reset);
	printf(BHGRN "| %% bonjour %c baguette du %s oui %i oui %d merci %x svp %X aurevoir %u\n" reset, c, s, i, d, x, x, i);
	ft_printf(BHWHT "| %% bonjour %c baguette du %s oui %i oui %d merci %x svp %X aurevoir %u\n" reset, c, s, i, d, x, x, i);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");

#endif

	return (0);
}
