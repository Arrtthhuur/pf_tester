/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_format_p.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/29 16:31:13 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/01 15:51:29 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

unsigned long long	ft_format_p(va_list args)
{
	unsigned long long	p;

	p = (unsigned long long) va_arg(args, void *);
	return (p);
}
