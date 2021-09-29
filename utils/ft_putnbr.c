/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/23 10:29:13 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/29 20:02:08 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "utils.h"

void	recursive(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		recursive(nb * -1);
	}
	else if (nb < 10)
	{
		nb += '0';
		ft_putchar(nb);
	}
	else
	{
		recursive(nb / 10);
		nb = nb % 10 + '0';
		ft_putchar(nb);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		recursive(147483648);
	}
	else
	{
		recursive(nb);
	}
}
