/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pf_print_u.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 18:46:11 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/04 22:34:33 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

/*
File with function to print u conversion and return count
*/

int	ft_uprintf(unsigned int ui)
{
	int		count;
	char	*ret;

	ret = ft_utoa(ui);
	ft_putstr(ret);
	count = ft_strlen(ret);
	free(ret);
	return (count);
}
