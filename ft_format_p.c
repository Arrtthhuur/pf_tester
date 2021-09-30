/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_format_p.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/29 16:31:13 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/29 18:34:32 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_format_p(va_list args)
{
	char	*p;

	p = va_arg(args, char *);
	return (p);
}
