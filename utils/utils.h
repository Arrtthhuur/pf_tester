/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/28 15:53:54 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/02 17:36:40 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

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

#endif
