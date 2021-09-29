/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_format_d.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/29 13:43:51 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/29 13:49:20 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include <stdio.h> // printf
#include <stdarg.h> // va_list

int	ft_format_d(va_list args)
{
	int	d;

	d = va_arg(args, int);
	return (d);
}
