# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enunes <eocnunes@gmail.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/09 21:28:36 by enunes            #+#    #+#              #
#    Updated: 2017/06/14 19:20:14 by enunes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	ft_atoi.c		ft_isascii.c	ft_strcat.c		ft_strcpy.c  	\
		ft_strncat.c	ft_strnstr.c	ft_tolower.c	ft_isalnum.c 	\
		ft_isdigit.c	ft_strchr.c		ft_strdup.c		ft_strncmp.c 	\
		ft_strrchr.c	ft_toupper.c	ft_isalpha.c	ft_isprint.c	\
		ft_strcmp.c		ft_strlen.c		ft_strncpy.c	ft_strstr.c		\
		ft_bzero.c		ft_memcpy.c		ft_memset.c		ft_memmove.c	\
		ft_memchr.c 	ft_memcmp.c		ft_memccpy.c	ft_strlcat.c	\
		ft_memalloc.c 	ft_memdel.c		ft_strnew.c		ft_strdel.c		\
		ft_strclr.c		ft_striter.c	ft_striteri.c	ft_strmap.c		\
		ft_strmapi.c	\

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I .

all: $(NAME)
		
$(OBJS): %.o: %.c
		@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)		
		@ar rcs $(NAME) $(OBJS)

clean:
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)

re: fclean all
