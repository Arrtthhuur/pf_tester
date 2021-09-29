/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 18:43:17 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/29 17:04:41 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "utils/utils.h"

# include <stdarg.h>

int		ft_printf(const char *str, ...);

char	ft_format_c(va_list args);

char	*ft_format_s(va_list args);

int		ft_format_d(va_list args);

void	*ft_format_p(va_list args);

#endif
