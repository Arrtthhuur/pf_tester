/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pf_uprint.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 18:46:11 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/04 18:50:26 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	pf_uprint(unsigned int ui)
{
	int		count;
	char	*ret;

	ret = ft_utoa(ui);
	ft_putstr(ret);
	count = ft_strlen(ret);
	free(ret);
	return (count);
}
