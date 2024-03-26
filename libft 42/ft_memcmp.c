/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:52:18 by tstacul           #+#    #+#             */
/*   Updated: 2024/03/25 19:30:31 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((str1[i] - str2[i]));
		}
		i++;
	}
	return (0);
}
/*int	main(void)
{
	const char *s1 = "Hola mundo";
	const char *s2 = "Hola muñeco";
	size_t n = 12;
	int result = ft_memcmp(s1, s2, n);

	if (result == 0)
	{
		printf("Son iguales.\n");
	}
	else
	{
		printf("las cadenas difieren en '%d' \n", result);
	}
	return 0;
}*/
