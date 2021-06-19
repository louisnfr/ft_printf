# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraffin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/11 01:48:13 by lraffin           #+#    #+#              #
#    Updated: 2021/06/19 18:58:07 by lraffin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=		ft_atoi_base.c \
			ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isflag.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_nbrlen_u.c \
			ft_nbrlen_ul.c \
			ft_nbrlen.c \
			ft_put0xhexa_ret.c \
			ft_putchar_fd.c \
			ft_putchar_ret.c \
			ft_putchar.c \
			ft_putendl_fd.c \
			ft_puthexa_ret.c \
			ft_putnbr_fd.c \
			ft_putnbr_ret.c \
			ft_putnbr_u_ret.c \
			ft_putnbr_u.c \
			ft_putnbr.c \
			ft_putstr_fd.c \
			ft_putstr_n_ret.c \
			ft_putstr_ret.c \
			ft_putstr.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c

BONUS=		ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstsize.c

NAME=		libft.a

CC=			gcc -I includes

HEADERS=	libft.h

RM=			rm -f

CFLAGS=		-Wall -Wextra -Werror

OBJ=		$(SRC:.c=.o)

OBJ_BONUS=	$(BONUS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ) $(HEADERS)
			ar rc $(NAME) $^
			ranlib $(NAME)

bonus:		$(OBJ) $(OBJ_BONUS) $(HEADERS)
			ar rc $(NAME) $^
			ranlib $(NAME)

clean:		
			$(RM) *.o

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all, clean, fclean, re, bonus
