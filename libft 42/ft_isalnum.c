/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:45:24 by tstacul           #+#    #+#             */
/*   Updated: 2024/03/21 18:09:13 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int n)
{
	return (((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z')
			|| (n >= '0' && n <= '9')));
}
/*
int	main(void)
{
	int a;
	a = 122;
	if (ft_isalnum(a))
	{
		printf("Es un alfabetico o un digito.\n");
	}
	else
	{
		printf("No es alfabetico, ni digito.\n");
	}
	return (0);
}*/
