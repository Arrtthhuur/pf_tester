/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_uxXprintf.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/01 18:08:59 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/01 18:21:38 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
