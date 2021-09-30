/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_format_s.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 17:18:36 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/29 12:13:51 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_format_s(va_list args)
{
	char	*s;

	s = va_arg(args, char *);
	return (s);
}
