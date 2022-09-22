# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzamolo- <rzamolo-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 21:46:19 by rzamolo-          #+#    #+#              #
#    Updated: 2022/09/22 22:02:33 by rzamolo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
CFILES = 	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c
HDRS = libft.h
OBJS = ${CFILES:.c=.o}
LIB = libft.a
RM = rm -rf

.PHONY: all re fclean clean

all: ${LIB}

${LIB}: ${OBJS}
	@ar rc ${LIB} ${OBJS}
	@ranlib ${LIB}

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

re:	fclean	all

fclean:	clean
	$(RM) ${LIB}

clean:
	$(RM) ${OBJS}
