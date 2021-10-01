/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 18:40:57 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/01 15:57:45 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list				args;
	int					d;
	int					len;
	int					i;
	char				c;
	char				*s;
	unsigned long long	p;
	unsigned int		x;
	unsigned int		ui;
	char				*ret;

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
				d = ft_format_di(args);
				ft_putnbr(d);
				len++;
			}
			else if (fmt[len + 1] == 'i')
			{
				i = ft_format_di(args);
				ft_putnbr(i);
				len++;
			}
			else if (fmt[len + 1] == 'p')
			{
				p = ft_format_p(args);
				ft_putstr("Ox");
				ft_hexlong_conv(p);
				len++;
			}
			else if (fmt[len + 1] == 'u')
			{
				ui = ft_format_uxX(args);
				ret = ft_utoa(ui);
				ft_putstr(ret);
				len++;
			}
			else if (fmt[len + 1] == 'x' || fmt[len + 1] == 'X')
			{
				x = ft_format_uxX(args);
				if (fmt[len + 1] == 'x')
					ft_hex_conv(x, 1);
				else if (fmt[len + 1] == 'X')
					ft_hex_conv(x, 2);
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
