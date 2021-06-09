# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraffin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/03 15:46:47 by lraffin           #+#    #+#              #
#    Updated: 2021/06/09 14:19:36 by lraffin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=			gcc
CFLAGS=		-Wall -Wextra -Werror

NAME=		printf

LIB_DIR=	./libft

SRCS=		srcs/main.c \
			ft_printf.c 

OBJ=		$(SRCS:.c=.o)

all:		
			$(MAKE) all -C $(LIB_DIR)
			$(CC) $(CFLAGS) $(SRCS) ./libft/libft.a -o $(NAME)

clean:		
			$(MAKE) clean -C $(LIB_DIR)
			rm -fv $(NAME)

fclean:		
			$(MAKE) fclean -C $(LIB_DIR)
			rm -fv $(NAME)

re:			fclean all

.PHONY:		all, clean, fclean, re