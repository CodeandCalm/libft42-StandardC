/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:59:37 by tstacul           #+#    #+#             */
/*   Updated: 2024/03/21 15:40:27 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlen(const char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

/*int main(void) {
    const char *cadena = "Hola mundo";
    int longitud = ft_strlen(cadena);

    printf("La longitud de la cadena \"%s\" es: %d\n", cadena, longitud);

    return 0;
}*/
