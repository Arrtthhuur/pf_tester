/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 18:40:57 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/29 20:18:25 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list			args;
	int				d;
	int				len;
	char			c;
	char			*s;
	int				x;
	int				i;
	char			*p;
	unsigned int	ui;

	va_start(args, fmt);
	len = 0;
	while (fmt[len])
	{
		if (fmt[len] == '%')
		{
			if (fmt[len + 1] == 'c')
			{
				c = ft_format_c(args);
				ft_putchar(c);
				len++;
			}
			else if (fmt[len + 1] == 's')
			{
				s = ft_format_s(args);
				ft_putstr(s);
				len++;
			}
			else if (fmt[len + 1] == 'd')
			{
				d = ft_format_d(args);
				ft_putnbr(d);
				len++;
			}
			else if (fmt[len + 1] == 'x' || fmt[len + 1] == 'X')
			{
				x = ft_format_xX(args);
				if (fmt[len + 1] == 'x')
					ft_hex_conv(x, 1);
				else if (fmt[len + 1] == 'X')
					ft_hex_conv(x, 2);
				len++;
			}
			else if (fmt[len + 1] == 'i')
			{
				i = ft_format_i(args);
				ft_putnbr(i);
				len++;
			}
			else if (fmt[len + 1] == 'p')
			{
				p = ft_format_p(args);
				ft_putstr("Ox");
				ft_putstr(p);
				len++;
			}
			else if (fmt[len + 1] == 'u')
			{
				ui = ft_format_u(args);
				
				// if (ui < 0)
				// 	ui += 4294967295;
				// ft_putnbr(ui);
				len++;
			}
			else if (fmt[len + 1] == '%')
			{
				ft_putchar('%');
				len++;
			}
		}
		else
			ft_putchar(fmt[len]);
		len++;
	}
	va_end(args);
	return (0);
}
