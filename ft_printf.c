/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 18:40:57 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/28 18:27:32 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// #include <stdarg.h>
#include <stdio.h> // printf
#include <unistd.h> // write

static int	ft_parsing(const char *str)
{
	int	format;
	int	pos;

	format = 0;
	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == '%' && str[pos + 1] == 'c')
			format = 1;
		if (str[pos] == '%' && str[pos + 1] == 's')
			format = 2;
		pos++;
	}
	return (format);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		d;
	int		format;
	char	c;
	char	*s;

	va_start(args, fmt);
	format = ft_parsing(fmt);
	if (format == 1)
	{
		c = ft_format_c(args);
		while (*fmt)
		{
			ft_putchar(*fmt);
			if (*fmt == '%')
			{
				
				ft_putchar(c);
			}
			*fmt++;
		}
	}
	else if (format == 2)
	{
		s = ft_format_s(args);
		while (*fmt)
		{
			ft_putchar(*fmt);
			if (*fmt == '%')
			{
				ft_putstr(s);
			}
			*fmt++;
		}
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
