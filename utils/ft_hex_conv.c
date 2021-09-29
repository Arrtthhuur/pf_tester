/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hex_conv.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/29 18:39:38 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/29 20:01:55 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static int	ft_print_hex(char *hexadecimalnum, int j, int format)
{
	int	i;

	i = j - 1;
	while (i >= 0)
	{
		if (format == 1)
			ft_putchar(ft_tolower(hexadecimalnum[i]));
		else if (format == 2)
			ft_putchar(hexadecimalnum[i]);
		i--;
	}
	return (0);
}

int	ft_hex_conv(int decimalnum, int format)
{
	int		quotient;
	int		remainder;
	int		j;
	int		i;
	char	hexadecimalnum[100];

	i = 0;
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
	ft_print_hex(hexadecimalnum, j, format);
	return (0);
}
