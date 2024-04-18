/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <tstacul@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:51:49 by tstacul           #+#    #+#             */
/*   Updated: 2024/04/17 19:36:24 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_free_mem(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static int	ft_count_words(const char *str, char cut)
{
	int	words;
	int	in_word;

	words = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != cut && in_word == 0)
		{
			in_word = 1;
			words++;
		}
		else if (*str == cut)
		{
			in_word = 0;
		}
		str++;
	}
	return (words);
}

static	char	**ft_write_result(char const *s, char c, char	**result)
{
	size_t	start;
	size_t	i;
	size_t	word;

	start = 0;
	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			result[word] = ft_substr(s, start, i - start + 1);
			if (!result[word])
			{
				ft_free_mem(result);
				return (0);
			}
			word++;
		}
		if (s[i] == c && (s[i + 1] != c || s[i + 1] != '\0'))
			start = i + 1;
		i++;
	}
	result[word] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (0);
	result = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!result)
		return (0);
	result = ft_write_result(s, c, result);
	return (result);
}
/*
int main(void)
{
    char const *s= "Esta sera prueba magica";
    char c = ' ';
    int i = 0;
    char **result = ft_split(s, c);

    if (result)
    {
        while(result[i])
        {
            printf("palabra %d : %s\n", i + 1, result[i]);
            i++;
        }
        ft_free_mem(result);
    }

    else
    {
        printf("no se pudo dividir la cadena.\n");
    }
    return (0);
}*/
