/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:04:11 by tstacul           #+#    #+#             */
/*   Updated: 2024/03/21 15:34:06 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int n)
{
	return ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'));
}
/*
int	main(void)
{
	char	letra;

	printf("Ingresa una letra:");
	scanf("%c", &letra);
	if (ft_isalpha(letra))
	{
		(printf("Es alfabeto.\n"));
	}
	else
	{
		printf("no es. \n");
	} 
		return (0);
}*/
