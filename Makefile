# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraffin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/03 15:46:47 by lraffin           #+#    #+#              #
#    Updated: 2021/06/14 14:08:26 by lraffin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=			printf.a

SRC_PATH=		src/

LIBFT_PATH=		libft/

LIBFT_LIB=		libft.a

INCLUDE_PATH=	include/

SRC_FILES=		src/ft_printf.c \
				src/ft_print_strings.c \
				src/ft_print_integers.c \
				src/ft_flags.c \
				src/ft_alignment.c

SRC_OBJS=		${SRC_FILES:.c=.o}

CC= 			gcc

CFLAGS=			-Wall -Wextra -Werror

RM=				rm -f

AR=				ar rcs

LIBFT_OBJS=		${LIBFT_PATH}*.o

LIBFTMAKE=		$(MAKE) -C ${LIBFT_PATH} bonus

all:			${NAME}

${NAME}:    	${SRC_OBJS} pmake
				${AR} ${NAME} ${SRC_OBJS} ${LIBFT_OBJS}

pmake:
				${LIBFTMAKE}

clean:
				make -C ${LIBFT_PATH} clean
				${RM} ${SRC_OBJS}

fclean: 		clean
				${RM} ${NAME} ${LIBFT_PATH}${LIBFT_LIB}

re:         	fclean all

.PHONY:        all clean fclean re
