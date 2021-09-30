/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_format_x.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/29 18:29:15 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/29 19:48:14 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_format_xX(va_list args)
{
	int	i;

	i = va_arg(args, int);
	return (i);
}
