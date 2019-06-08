# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmasima <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/07 16:12:57 by mmasima           #+#    #+#              #
#    Updated: 2019/06/08 16:39:07 by mmasima          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	libft.a
SRC		=	*.c
OBJECT	=	*.o
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) -c $(SRC)
		ar rc $(NAME) $(OBJECT)
		ranlib $(NAME)
		rm -f $(OBJECT)
clean:
		rm -f $(OBJECT)
fclean: clean
		rm -f $(NAME)

re:	fclean all

.PHONY: clean fclean all re
