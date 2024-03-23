/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:35:49 by tstacul           #+#    #+#             */
/*   Updated: 2024/03/22 20:34:28 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *str;
    size_t  i;

    i = 0;
    str = (const unsigned char *)s;
    while (i < n)
    {
        if (str[i] == (unsigned char)c)
            return ((void *)(str + i));
        i++;
    }
    return (NULL);
}
/*int main(void)
{
    const char *str = "Hola memoria complicada";
    char c = 'o';
    size_t n = 20;

    void *result = ft_memchr(str, c, n);

    if(result != NULL)
    {
        printf("EL CARACTER %c, se encuentra en %p\n", c, result);
    }
    else
    {
        printf("No se encontro '%c'\n", c);
    }
    return 0;
}*/
