/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <tstacul@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 22:03:17 by tstacul           #+#    #+#             */
/*   Updated: 2024/03/27 21:32:17 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_substr(const char *str, char *substr, int ind, int len)
{
	int i;

	i = 0;
	if (ind >= ft_strlen(str))
	{
		substr[0] = '\0';
		return;
	}
	while (i < len && str[ind + i] != '\0')
	{
		substr[i] = str[ind + i];
		i++;
	}
	substr[len] = '\0';
}