/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_utoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/01 13:37:14 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/03 16:21:53 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static size_t	ft_uintlen(unsigned int ui)
{
	size_t			i;
	unsigned int	num;

	i = 0;
	num = ui;
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_utoa(unsigned int ui)
{
	char			*ptr;
	size_t			len;
	unsigned int	num;

	len = ft_uintlen(ui);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	num = ui;
	if (ui == 0)
		ptr[0] = '0';
	while (num > 0)
	{
		len--;
		ptr[len] = num % 10 + '0';
		num /= 10;
	}
	return (ptr);
}
