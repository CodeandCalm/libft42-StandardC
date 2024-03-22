/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:14:57 by tstacul           #+#    #+#             */
/*   Updated: 2024/03/21 15:34:33 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *)dest;
	s = (const char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	int src[] = {1, 2, 3, 4, 5}; //array de origen
	int dest[5];

	ft_memcpy(dest, src, sizeof(src));

	printf("Contenido del array de destino despues de la copia: \n");
	for (int i = 0; i < sizeof(src)/ sizeof(src[0]); i++)
	{
		printf("%d", dest[i]);
	}
	printf("\n");
	
	return 0;

	}*/
