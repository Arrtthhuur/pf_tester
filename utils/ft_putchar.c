/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/23 10:25:57 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/03 16:21:44 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

#include <unistd.h> // write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
