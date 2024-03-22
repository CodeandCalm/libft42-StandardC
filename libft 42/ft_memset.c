/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:29:38 by tstacul           #+#    #+#             */
/*   Updated: 2024/03/21 15:31:55 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		len --;
		p[len] = c;
	}
}
/*
int	main(void)
{
	char	b [20];

	ft_memset(b, 'f', sizeof(b));
	printf("por favor dime tu nombre:");
	scanf("%19s", b);
	printf("Hola, %s!\n", b);
	return (0);
}
necesito tres cosas, un bloque de memoria al q le asigno u valor*/
/*el valor, y cuantos espacios en el bloque queeremos llenar)*/
/*convierto el bloque de memoria en una lista de caracteres co p)*/
