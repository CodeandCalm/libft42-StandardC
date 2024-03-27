/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 23:01:33 by tstacul           #+#    #+#             */
/*   Updated: 2024/03/27 14:57:55 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dest;

	if (s1 == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(s1) + 1;
	dest = malloc(len);
	if (dest != NULL)
		ft_strlcpy(dest, s1, len);
	return (dest);
}
