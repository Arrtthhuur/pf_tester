/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 18:43:17 by abeznik       #+#    #+#                 */
/*   Updated: 2021/09/29 20:19:27 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "utils/utils.h"

# include <stdarg.h>

int				ft_printf(const char *str, ...);

char			ft_format_c(va_list args);

char			*ft_format_s(va_list args);

int				ft_format_d(va_list args);

char			*ft_format_p(va_list args);

int				ft_format_xX(va_list args);

int				ft_format_i(va_list args);

unsigned int	ft_format_u(va_list args);

#endif
