/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_format_s.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 17:18:36 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/27 18:13:40 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include <stdio.h>
#include <stdarg.h>

char	*ft_format_s(va_list args)
{
	char	*s;

	s = va_arg(args, char *);
	return (s);
}
