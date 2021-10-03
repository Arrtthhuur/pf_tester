/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 18:43:17 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/03 16:17:06 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "../utils/utils.h"

# include <stdarg.h>

int					ft_printf(const char *str, ...);

char				ft_format_c(va_list args);

char				*ft_format_s(va_list args);

unsigned long long	ft_format_p(va_list args);

int					ft_format_di(va_list args);

unsigned int		ft_format_uxX(va_list args);

void				ft_cprintf(va_list args);

void				ft_sprintf(va_list args);

void				ft_diprintf(va_list args);

void				ft_pprintf(va_list args);

void				ft_uxXprintf(va_list args, const char *fmt, int len);

void				ft_pprintf(va_list args);

#endif
