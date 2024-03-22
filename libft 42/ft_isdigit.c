/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:22:43 by tstacul           #+#    #+#             */
/*   Updated: 2024/03/21 15:31:25 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int n)
{
	return (n >= '0' && n <= '9');
}
/*
int	main(void)
{
	int	a;
	int 49;

	printf("Ingresa un digito.\n");
	if (ft_isdigit(a))
	{
		printf("Es un digito.\n");
	}
	else
	{
		printf("no es un digito. \n");
	}
	return (0);
}*/
