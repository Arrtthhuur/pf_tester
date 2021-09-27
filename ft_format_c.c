/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_format_c.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 17:18:36 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/27 18:13:32 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include <stdio.h>
#include <stdarg.h>

char	ft_format_c(va_list args)
{
	char	c;

	c = (char) va_arg(args, char *);
	return (c);
}
