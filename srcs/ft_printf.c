/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 18:40:57 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/03 15:34:15 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static void	ft_parsing(va_list args, const char *fmt, int len)
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
