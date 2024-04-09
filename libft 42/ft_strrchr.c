/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:53:04 by tstacul           #+#    #+#             */
/*   Updated: 2024/04/09 15:46:15 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	if (str == NULL)
	{
		return (NULL);
	}
	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char str [] = "Publico esta locura";
	int c = 's';
	int *result = ft_strrchr(str, c);

	if (result)
	{
		printf("Localizada en reversa la letra %c\n.", c);
	}
	else
	{
		printf("no se encontro %c \n", c);
	}
	return 0;
}*/
