# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraffin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/11 01:48:13 by lraffin           #+#    #+#              #
#    Updated: 2021/06/07 18:38:36 by lraffin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=		libft.a

CC=			gcc

FLAG=		-Wall -Wextra -Werror

SRC=		ft_atoi_base.c \
			ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putchar.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putnbr.c \
			ft_putstr_fd.c \
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

OBJ=		$(SRC:.c=.o)

OBJ_BONUS=	$(BONUS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			@ar rc $(NAME) $^
			@echo "$(NAME) created"
			@ranlib $(NAME)
			@echo "$(NAME) indexed"

bonus:		$(OBJ) $(OBJ_BONUS)
			@ar rc $(NAME) $^
			@echo "$(NAME) created with bonus"
			@ranlib $(NAME)
			@echo "$(NAME) indexed with bonus"

%.o: %.c
			@$(CC) $(FLAG) -o $@ -c $<

clean:
			@rm -f $(OBJ) $(OBJ_BONUS)
			@echo "OBJs deleted"

fclean:		clean
			@rm -f $(NAME)
			@echo "$(NAME) deleted"

re:			fclean all

.PHONY:		all, clean, fclean, re, bonus
