/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 11:48:57 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/01 13:34:12 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static size_t	ft_intlen(long n)
{
	size_t			i;
	unsigned int	num;

	i = 0;
	if (n <= 0)
	{
		num = n * -1;
		i++;
	}
	else
		num = n;
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*ptr;
	size_t			len;
	unsigned int	num;

	len = ft_intlen(n);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (n < 0)
	{
		num = n * -1;
		ptr[0] = '-';
	}
	else
		num = n;
	if (n == 0)
		ptr[0] = '0';
	while (num > 0)
	{
		len--;
		ptr[len] = num % 10 + '0';
		num /= 10;
	}
	return (ptr);
}
