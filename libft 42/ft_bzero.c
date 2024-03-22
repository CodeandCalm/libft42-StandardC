/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:08:33 by tstacul           #+#    #+#             */
/*   Updated: 2024/03/21 15:39:29 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *a, size_t len)
{
	ft_memset(a, 0, len);
}

/*int	main(void)
{
	char	buffer [10];
	size_t	len;

	len = sizeof(buffer);
	ft_bzero(buffer, len);
	return (0);
}
*void *ptr direc de milista, size_t tamañodemilista*/
