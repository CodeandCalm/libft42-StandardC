/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:09:23 by tstacul           #+#    #+#             */
/*   Updated: 2024/03/22 20:26:36 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	const char *s1 = "Hola";
	const char *s2 = "hola mundo";
	int result = ft_strncmp(s1, s2, 10);

	if (result == 0)
	{
		printf("las cadenas son iguales \n");
	}
	else
	{
		printf("las cadenas difieren en '%d \n", result);
	}
	return 0;
}*/
