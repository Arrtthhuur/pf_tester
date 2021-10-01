/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_format_d.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/29 13:43:51 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/01 14:53:23 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_format_di(va_list args)
{
	int	d;

	d = va_arg(args, int);
	return (d);
}
