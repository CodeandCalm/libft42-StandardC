# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tstacul <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 12:27:54 by tstacul           #+#    #+#              #
#    Updated: 2024/04/14 15:00:14 by tstacul          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME		= libft.a

FILES 	   = ft_strlen.c \
			 ft_memmove.c \
			 ft_memcpy.c \
			 ft_strlcpy.c \
			 ft_strlcat.c \
			 ft_isalpha.c \
			 ft_isdigit.c \
			 ft_isalnum.c \
			 ft_isascii.c \
			 ft_isprint.c \
			 ft_memset.c \
			 ft_bzero.c \
			 ft_toupper.c \
			 ft_tolower.c \
			 ft_strchr.c \
			 ft_strrchr.c \
			 ft_strncmp.c \
			 ft_memchr.c \
			 ft_memcmp.c \
			 ft_strnstr.c \
			 ft_atoi.c \
			 ft_calloc.c \
			 ft_strdup.c \
			 ft_substr.c \
			 ft_strjoin.c \
			 ft_strtrim.c \
			 ft_split.c \
			 ft_itoa.c \
			 ft_strmapi.c \
			 ft_striteri.c \
			 ft_putchar_fd.c \
			 ft_putstr_fd.c \
			 ft_putendl_fd.c \
			 ft_putnbr_fd.c

COMPILER = gcc

CFLAGS = -Wall -Wextra -Werror

OFILES	= $(FILES:%.c=%.o)

$(NAME) : $(OFILES)
	ar -rcs $(NAME) $(OFILES)	

all : $(NAME)

clean :
	rm -f $(OFILES)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all, clean, fclean, re
