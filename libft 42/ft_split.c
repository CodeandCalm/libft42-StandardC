/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 23:36:03 by tstacul           #+#    #+#             */
/*   Updated: 2024/03/29 02:10:42 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_free_mem(char **array, int i)
{
	while (indice -- > 0)
	{
		free(array[i]);
	}
	free (array);
}

static int	ft_count_words(const char *str, char cut)
{
	int	i;
	int	words;
	int	in_word;

	i = 0;
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

static char	*create_word(const char *start, int len)
{
	char	*word;

	word = (char *)malloc(sizeof(char) *(len + 1));
	if (!word)
	{
		return (NULL);
	}
	ft_strncpy(word, start, len);
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**result;
	const char	*start;
	if (!s)
	{
		return (NULL);
	}
	i = 0;
	words = ft_count_words(s, c);
	**result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
	{
		return (NULL);
	}
	*start = s;
	while (*s)
	{
		if (*s != c && (s == start || *(s - 1) == c))
		{
			start = s;
			while (*s && *s != c)
			{
				s++;
			}
			result[i++] = create_word(start, s - start);
			if (!result[i - 1])
			{
				free_mem(result, i - 1);
				return (NULL);
			}
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
