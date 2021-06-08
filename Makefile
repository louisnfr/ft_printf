# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraffin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/03 15:46:47 by lraffin           #+#    #+#              #
#    Updated: 2021/06/08 17:47:23 by lraffin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=		libftprintf.a

CC=			gcc

FLAG=		-Wall -Wextra -Werror

SRCS=		ft_printf.c

OBJS=		$(SRC:.c=.o)

INCLUDES=	-I includes/ft_printf.h libft/libft.h

all:		$(NAME)

$(NAME):	$(OBJS)
			$(MAKE) bonus -C ./libft
			cp libft/libft.a $(NAME)
			$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
			ar -rcs $(NAME) $(OBJS)

%.o: %.c
			$(CC) $(FLAGS) $(INCLUDES) $(SRCS) -o $@ -c $<

clean:		$(MAKE) clean -C ./libft
			rm -f $(OBJS)

fclean:		clean
			$(MAKE) fclean -C ./libft
			rm -f $(NAME)

re:			fclean all

.PHONY:		all, clean, fclean, re