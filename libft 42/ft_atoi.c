/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 22:46:25 by tstacul           #+#    #+#             */
/*   Updated: 2024/04/10 11:01:04 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	if (str == NULL || *str == '\0')
		return (0);
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'
		|| *str == '\f' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
/*
int	main(void)
{
    char str1[] = "12345";
    char str2[] = "-6789";
    char str3[] = "  +1234";
    char str4[] = "";

    printf("ft_atoi(\"%s\") = %d\n", str1, ft_atoi(str1));
    printf("ft_atoi(\"%s\") = %d\n", str2, ft_atoi(str2));
    printf("ft_atoi(\"%s\") = %d\n", str3, ft_atoi(str3));
    printf("ft_atoi(\"%s\") = %d\n", str4, ft_atoi(str4));

    return 0;
}*/
