/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <tstacul@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 00:08:16 by tstacul           #+#    #+#             */
/*   Updated: 2024/04/11 17:38:38 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static unsigned int	ft_number_size(int number)
{
	unsigned int	len;

	len = 0;
	if (number <= 0)
		len = 1;
	while (number != 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

static int	ft_handle_negative(int *n)
{
	int	is_negative;

	is_negative = 0;
	if (*n < 0)
	{
		is_negative = 1;
		*n = -(*n);
	}
	return (is_negative);
}

static char	*handle_min_negative(void)
{
	return (ft_strdup("-2147483648"));
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	length;
	unsigned long	number;
	int				is_negative;

	if (n == -2147483648LL)
	{
		return (handle_min_negative());
	}
	is_negative = ft_handle_negative(&n);
	number = n;
	length = ft_number_size(number) + is_negative;
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (is_negative)
		str[0] = '-';
	while (length > (unsigned int)is_negative)
	{
		str[--length] = (number % 10) + '0';
		number /= 10;
	}
	return (str);
}
