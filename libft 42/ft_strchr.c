/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:20:43 by tstacul           #+#    #+#             */
/*   Updated: 2024/04/15 12:30:15 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		if (*str == uc)
		{
			return ((char *)str);
		}
		str++;
	}
	if (*str == uc)
	{
		return ((char *)str);
	}
	return (NULL);
}
/*
int	main(void)
{
	char str[] = "Hola mundo";
	int c = 'a';
	char *result = ft_strchr(str, c);

	if (result)
	{
		printf("character '%c' found at %p \n", c, result);
	}
	else 
	{
		printf( "character '%c' not found in the string \n", c);
	}
	return (0);
}*/
