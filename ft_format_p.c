/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_format_p.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/29 16:31:13 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/29 17:04:39 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include <stdio.h> // printf
#include <stdarg.h> // va_list

void	*ft_format_p(va_list args)
{
	void	*p;

	p = va_arg(args, void *);
	return (p);
}
