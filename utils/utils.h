/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/28 15:53:54 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/04 18:48:29 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "../includes/libftprintf.h"

# include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

size_t	ft_strlen(const char *s);

void	ft_putnbr(int nb);

int		ft_hex_conv(unsigned int decimalnum, int format);

int		ft_tolower(int c);

char	*ft_itoa(int n);

char	*ft_utoa(unsigned int ui);

int		ft_hexlong_conv(unsigned long long decimalnum);

size_t	ft_strlen(const char *s);

size_t	ft_intlen(long n);

int		pf_uprint(unsigned int ui);

#endif
