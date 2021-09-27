/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 18:40:57 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/27 18:41:19 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include "libft/libft.h"

#include <stdio.h>
#include <stdarg.h>

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
	int		len;
	int		format;
	char	c;
	char	*s;

	va_start(args, fmt);
	format = ft_parsing(fmt);
	if (format == 1)
	{
		printf("Formatting c.\n");
		c = ft_format_c(args);
		printf("ft_printf char: %c\n", c);
	}
	else if (format == 2)
	{
		printf("Formatting s.\n");
		s = ft_format_s(args);
		printf("ft_printf str: %s\n", s);
	}
	len = 0;
	while (fmt[len])
	{
		ft_putchar(fmt[len]);
		len++;
	}
	write(1, "\n", 1);
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
