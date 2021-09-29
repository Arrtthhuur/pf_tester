/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_format_i.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/29 20:04:38 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/29 20:10:25 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_format_i(va_list args)
{
	int	i;

	i = va_arg(args, int);
	return (i);
}
