/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hexlong_conv.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/29 18:39:38 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/04 18:37:29 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <stdio.h>

static int	ft_print_hex(char *hexadecimalnum, int j)
{
	int	i;

	i = j - 1;
	while (i >= 0)
	{
		ft_putchar(ft_tolower(hexadecimalnum[i]));
		i--;
	}
	return (0);
}

static int	ft_toomuchlines(unsigned long long decimalnum,
	char *hexadecimalnum, int j)
{
	int	count;

	count = ft_strlen(hexadecimalnum);
	ft_print_hex(hexadecimalnum, j);
	return (count);
}

int	ft_hexlong_conv(unsigned long long decimalnum)
{
	unsigned long long		quotient;
	unsigned long long		remainder;
	int						j;
	char					hexadecimalnum[100];
	int						count;

	j = 0;
	quotient = decimalnum;
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			remainder += 48;
		else
			remainder += 55;
		hexadecimalnum[j] = remainder;
		j++;
		quotient = quotient / 16;
	}
	hexadecimalnum[j] = '\0';
	count = ft_toomuchlines(decimalnum, hexadecimalnum, j);
	return (count);
}
