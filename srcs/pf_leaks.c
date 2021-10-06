/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pf_leaks.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 15:21:09 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/06 21:41:38 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf/includes/libftprintf.h"

int	main(void)
{
	ft_printf("%% %c %s %i %d %x %X %u\n", 'c', "salut", 42, -42, 12, -12, 4242);
	while (1)
	{
	}
	return (0);
}
