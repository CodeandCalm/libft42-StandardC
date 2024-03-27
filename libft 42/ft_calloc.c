/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:49:45 by tstacul           #+#    #+#             */
/*   Updated: 2024/03/26 21:58:07 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	b;
	void	*p;

	b = count * size;
	p = malloc(b);
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_memset(p, 0, b);
		return (p);
	}
}
