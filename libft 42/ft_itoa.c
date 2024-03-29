/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <tstacul@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 00:08:16 by tstacul           #+#    #+#             */
/*   Updated: 2024/03/28 14:40:32 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_number_size(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	ft_digit_to_char(int digit)
{
	return (digit + '0');
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digit;
	int		len;
	int		i;

	len = ft_number_size(n);
	*str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = len - 1;
	while (i >= 0)
	{
		digit = n % 10;
		str[i] = ft_digit_to_char(digit);
		n /= 10;
		i--;
	}
	str[len] = '\0';
	return (str);
}
