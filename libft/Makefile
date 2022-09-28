# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 21:46:19 by rzamolo-          #+#    #+#              #
#    Updated: 2022/09/28 18:16:52 by rzamolo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror

CFILES			= \
				ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
				ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c\
				ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
				ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c\
				ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c\
				ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
				ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_split.c
OBJS			= $(CFILES:.c=.o)

CFILES_BONUS	= \
				ft_lstnew.c ft_lstadd_front.c
OBJS_BONUS		= $(CFILES_BONUS:.c=.o)

NAME	=	libft.a

OBJECTS	=	$(CFILES:.c=.o)

$(NAME):	$(OBJECTS)
			ar -rc $@ $^

%.o:		%.c
			$(CC) $(CFLAGS) -c $^ -o $@

all:		$(NAME)
			-j 4

clean:
			rm -rf $(OBJECTS)

bonus:		$(CFILES_BONUS)
			ar -rc $@ $^
			

fclean:		clean
			rm -rf $(NAME)		

re:			fclean all

.PHONY:		all bonus clean fclean re