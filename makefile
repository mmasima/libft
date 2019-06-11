# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmasima <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/07 16:12:57 by mmasima           #+#    #+#              #
#    Updated: 2019/06/11 11:30:36 by mmasima          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
NAME	= libft.a
CFLAGS	= -Wall -Werror -Wextra -I. -c
FILES	= *.c

OBJECT = $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJECT)
	ar rc $(NAME) $(OBJECT)

$(OBJECT): $(FILES)
	$(CC) $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: clean fclean all re

