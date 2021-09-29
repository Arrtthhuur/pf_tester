/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_format_c.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 17:18:36 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/29 13:50:00 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include <stdio.h> // printf
#include <stdarg.h> // va_list

char	ft_format_c(va_list args)
{
	char	c;

	c = (char) va_arg(args, char *);
	return (c);
}