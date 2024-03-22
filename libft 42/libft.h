/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:01:10 by tstacul           #+#    #+#             */
/*   Updated: 2024/03/22 20:27:41 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <string.h>

void	ft_bzero(void *a, size_t len);
int		ft_isalnum(int n);
int		ft_isalpha(int n);
int		ft_isascii(int n);
int		ft_isdigit(int n);
int		ft_isprint(int n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t	len);
void	ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlcat(char	*dest, const	char *src, size_t size);
size_t	ft_strlpy(char	*dest, char *src, size_t size);
int		ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *str, int c);
int		ft_tolower(int i);
int		ft_toupper(int i);
#endif
