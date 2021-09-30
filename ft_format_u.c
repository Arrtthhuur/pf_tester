/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_format_u.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/29 18:29:15 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/29 20:19:08 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

unsigned int	ft_format_u(va_list args)
{
	unsigned int	ui;

	ui = va_arg(args, unsigned int);
	return (ui);
}
