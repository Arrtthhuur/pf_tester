/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 18:40:57 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/27 16:13:50 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include <stdio.h>
#include <stdarg.h>

// int	ft_printf(const char *fmt, ...)
// {
// 	va_list	ap;
// 	int		d;
// 	char	c;
// 	char	*s;

// 	va_start(ap, fmt);
// 	while (*fmt)
// 	{
// 		switch (*fmt++)
// 		{
// 			case 's':
// 				s = va_arg(ap, char *);
// 				printf("str %s\n", s);
// 				break ;
// 			case 'd':
// 				d = va_arg(ap, int);
// 				printf("int %d\n", d);
// 				break ;
// 			case 'c':
// 				c = (char) va_arg(ap, char *);
// 				printf("char %c\n", c);
// 				break ;
// 		}
// 	}
// 	va_end(ap);
// 	return (0);
// }

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		d;
	char	c;
	char	*s;

	va_start(ap, fmt);
	while (*fmt)
	{
		*fmt++;
		if (*fmt == 's')
		{
			s = va_arg(ap, char *);
			printf("ft_printf str: %s\n", s);
			break ;
		}
		else if (*fmt == 'd')
		{
			d = va_arg(ap, int);
			printf("ft_printf int: %d\n", d);
			break ;
		}
		else if (*fmt == 'c')
		{
			c = (char) va_arg(ap, char *);
			printf("ft_printf char: %c\n", c);
			break ;
		}
	}
	va_end(ap);
	return (0);
}
