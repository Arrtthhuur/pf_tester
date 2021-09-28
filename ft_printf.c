/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 18:40:57 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/28 19:06:24 by abeznik       ########   odam.nl         */
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
	int		len;
	char	c;
	char	*s;
	char	*tmp;
	char	*output;

	va_start(args, fmt);
	format = ft_parsing(fmt);
	if (format == 1)
	{
		c = ft_format_c(args);
		len = 0;
		while (fmt[len])
		{
			// if (fmt[len] == '%')
			// {
			// 	tmp = ft_substr(fmt, 0, len);
			// 	output = ft_strjoin(tmp, c);
			// 	printf("%s", output);
			// }
			len++;
		}
	}
	else if (format == 2)
	{
		s = ft_format_s(args);
		len = 0;
		while (fmt[len])
		{
			if (fmt[len] == '%')
			{
				tmp = ft_substr(fmt, 0, len);
				output = ft_strjoin(tmp, s);
			}
			len++;
		}
		printf("out: %s", output);
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
