/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pprintf.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/01 18:26:33 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/01 18:26:54 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_pprintf(va_list args)
{
	unsigned long long	p;

	p = ft_format_p(args);
	ft_putstr("Ox");
	ft_hexlong_conv(p);
}
