/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <tstacul@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 22:03:17 by tstacul           #+#    #+#             */
/*   Updated: 2024/04/10 23:51:39 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_adjust_len(const char *s, unsigned int start, size_t len)
{
	size_t	str_len;

	str_len = ft_strlen(s);
	if (start >= str_len)
		return (0);
	if (start + len > str_len)
	{
		len = str_len - start;
	}
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	adjusted_len;
	char	*str;

	if (!s)
		return (NULL);
	adjusted_len = ft_adjust_len(s, start, len);
	str = ft_calloc(adjusted_len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < adjusted_len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
