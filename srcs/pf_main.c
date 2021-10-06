/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pf_main.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 15:48:53 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/06 22:00:36 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf/includes/libftprintf.h"

#include <stdio.h>

int	main(void)
{
	int	diff;

	diff = printf("pf: coucou bonjour %d\n", 42);
	diff -= ft_printf("ft: coucou bonjour %d\n", 42);
	if (diff == 0)
		printf("Great success!\n");
	else
		printf("Wawaweewa NOT!\n");
	return (0);
}
