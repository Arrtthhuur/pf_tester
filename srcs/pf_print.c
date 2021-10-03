/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printconv.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/02 13:25:07 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/03 15:33:59 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

/*
File with all the print functions according 
to the conversion format (see ft_conversions.c) 
*/

void	ft_cprintf(va_list args)
{
	char	c;

	c = ft_format_c(args);
	ft_putchar(c);
}

void	ft_sprintf(va_list args)
{
	char	*s;

	s = ft_format_s(args);
	ft_putstr(s);
}

void	ft_diprintf(va_list args)
{
	int	d;

	d = ft_format_di(args);
	ft_putnbr(d);
}

void	ft_pprintf(va_list args)
{
	unsigned long long	p;

	p = ft_format_p(args);
	ft_putstr("Ox");
	ft_hexlong_conv(p);
}

void	ft_uxXprintf(va_list args, const char *fmt, int len)
{
	unsigned int	ui;
	char			*ret;

	ui = ft_format_uxX(args);
	if (fmt[len] == 'x')
		ft_hex_conv(ui, 1);
	else if (fmt[len] == 'X')
		ft_hex_conv(ui, 2);
	else if (fmt[len] == 'u')
	{
		ret = ft_utoa(ui);
		ft_putstr(ret);
	}
}
