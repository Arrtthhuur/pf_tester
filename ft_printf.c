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

// #include <stdarg.h>
#include <stdio.h> // printf
#include <unistd.h> // write

// static int	ft_parsing(const char *str)
// {
// 	int	format;
// 	int	pos;

// 	format = 0;
// 	pos = 0;
// 	while (str[pos] != '\0')
// 	{
// 		if (str[pos] == '%' && str[pos + 1] == 'c')
// 			format = 1;
// 		if (str[pos] == '%' && str[pos + 1] == 's')
// 			format = 2;
// 		if (str[pos] == '%' && str[pos + 1] == 'd')
// 			format = 3;
// 		pos++;
// 	}
// 	return (format);
// }

// int	ft_printf(const char *fmt, ...)
// {
// 	va_list	args;
// 	int		d;
// 	int		format;
// 	int		len;
// 	char	c;
// 	char	*s;

// 	va_start(args, fmt);
// 	format = ft_parsing(fmt);
// 	if (format == 1)
// 	{
// 		c = ft_format_c(args);
// 		len = 0;
// 		while (fmt[len])
// 		{
// 			if (fmt[len] == '%' && fmt[len + 1] == 'c')
// 			{
// 				// tmp = ft_substr(fmt, 0, len);
// 				// fmt_left = ft_strdup(fmt + len + 2);
// 				// tmp[len] = c;
// 				// output = ft_strjoin(tmp, fmt_left);
// 				ft_putchar(c);
// 				len++;
// 			}
// 			else
// 			{
// 				ft_putchar(fmt[len]);
// 			}
// 			len++;
// 		}
// 	}
// 	else if (format == 2)
// 	{
// 		s = ft_format_s(args);
// 		len = 0;
// 		while (fmt[len])
// 		{
// 			if (fmt[len] == '%' && fmt[len + 1] == 's')
// 			{
// 				// tmp = ft_substr(fmt, 0, len);
// 				// fmt_left = ft_strdup(fmt + len + 2);
// 				// output_tmp = ft_strjoin(tmp, s);
// 				// output = ft_strjoin(output_tmp, fmt_left);
// 				ft_putstr(s);
// 				len++;
// 			}
// 			else
// 			{
// 				ft_putchar(fmt[len]);
// 			}
// 			len++;
// 		}
// 	}
// 	else if (format == 3)
// 	{
// 		d = ft_format_d(args);
// 		len = 0;
// 		while (fmt[len])
// 		{
// 			if (fmt[len] == '%' && fmt[len + 1] == 'd')
// 			{
// 				// tmp = ft_substr(fmt, 0, len);
// 				// fmt_left = ft_strdup(fmt + len + 2);
// 				d = d + '0';
// 				// tmp[len] = d_tmp;
// 				// output = ft_strjoin(tmp, fmt_left);
// 				ft_putchar(d);
// 				len++;
// 			}
// 			else
// 			{
// 				ft_putchar(fmt[len]);
// 			}
// 			len++;
// 		}
// 	}
// 	// ft_putstr("output: ");
// 	// ft_putstr(output);
// 	va_end(args);
// 	return (0);
// }

int	ft_printf(const char *fmt, ...)
{
	va_list			args;
	int				d;
	int				len;
	char			c;
	char			*s;
	int				x;
	int				i;
	long			p;
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
				d = d + '0';
				ft_putchar(d);
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
				ft_putnbr(p);
				len++;
			}
			else if (fmt[len + 1] == 'u')
			{
				ui = ft_format_u(args);
				ft_putnbr(ui);
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

// int	ft_printf(const char *fmt, ...)
// {
// 	va_list	args;
// 	int		d;
// 	int		format;
// 	char	c;
// 	char	*s;

// 	va_start(args, fmt);
// 	while (*fmt)
// 	{
// 		*fmt++;
// 		if (*fmt == 's')
// 		{
// 			s = va_arg(args, char *);
// 			printf("ft_printf str: %s\n", s);
// 			break ;
// 		}
// 		else if (*fmt == 'd')
// 		{
// 			d = va_arg(args, int);
// 			printf("ft_printf int: %d\n", d);
// 			break ;
// 		}
// 		else if (*fmt == 'c')
// 		{
// 			c = (char) va_arg(args, char *);
// 			printf("ft_printf char: %c\n", c);
// 			break ;
// 		}
// 	}
// 	va_end(ap);
// 	return (0);
// }
