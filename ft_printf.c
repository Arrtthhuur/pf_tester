/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 18:40:57 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/01 18:27:21 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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

void	ft_parsing(va_list args, const char *fmt, int len)
{
	if (fmt[len] == 'c')
		ft_cprintf(args);
	else if (fmt[len] == 's')
		ft_sprintf(args);
	else if (fmt[len] == 'd' || fmt[len] == 'i')
		ft_diprintf(args);
	else if (fmt[len] == 'p')
		ft_pprintf(args);
	else if (fmt[len] == 'x' || fmt[len] == 'X'
		|| fmt[len] == 'u')
		ft_uxXprintf(args, fmt, len);
	else if (fmt[len] == '%')
		ft_putchar('%');
}

int	ft_printf(const char *fmt, ...)
{
	va_list				args;
	int					len;

	va_start(args, fmt);
	len = 0;
	while (fmt[len])
	{
		if (fmt[len] == '%')
		{
			len++;
			ft_parsing(args, fmt, len);
		}
		else
			ft_putchar(fmt[len]);
		len++;
	}
	va_end(args);
	return (0);
}

// int	ft_printf(const char *fmt, ...)
// {
// 	va_list				args;
// 	int					d;
// 	int					len;
// 	char				c;
// 	char				*s;
// 	unsigned long long	p;
// 	unsigned int		ui;
// 	char				*ret;

// 	va_start(args, fmt);
// 	len = 0;
// 	while (fmt[len])
// 	{
// 		if (fmt[len] == '%')
// 		{
// 			if (fmt[len + 1] == 'c')
// 			{
// 				c = ft_format_c(args);
// 				ft_putchar(c);
// 				len++;
// 			}
// 			else if (fmt[len + 1] == 's')
// 			{
// 				s = ft_format_s(args);
// 				ft_putstr(s);
// 				len++;
// 			}
// 			else if (fmt[len + 1] == 'd' || fmt[len + 1] == 'i')
// 			{
// 				d = ft_format_di(args);
// 				ft_putnbr(d);
// 				len++;
// 			}
// 			else if (fmt[len + 1] == 'p')
// 			{
// 				p = ft_format_p(args);
// 				ft_putstr("Ox");
// 				ft_hexlong_conv(p);
// 				len++;
// 			}
// 			else if (fmt[len + 1] == 'x' || fmt[len + 1] == 'X'
// 				|| fmt[len + 1] == 'u')
// 			{
// 				ui = ft_format_uxX(args);
// 				if (fmt[len + 1] == 'x')
// 					ft_hex_conv(ui, 1);
// 				else if (fmt[len + 1] == 'X')
// 					ft_hex_conv(ui, 2);
// 				else if (fmt[len + 1] == 'u')
// 				{
// 					ret = ft_utoa(ui);
// 					ft_putstr(ret);
// 				}
// 				len++;
// 			}
// 			else if (fmt[len + 1] == '%')
// 			{
// 				ft_putchar('%');
// 				len++;
// 			}
// 		}
// 		else
// 			ft_putchar(fmt[len]);
// 		len++;
// 	}
// 	va_end(args);
// 	return (0);
// }
