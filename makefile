NAME 	=	libft.a
SRC		=	*.c
OBJECT	=	*.o
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
ALL		=	$(NAME)

$(NAME):
		$(CC) $(CFLAGS) -c $(SRC)
		ar rc $(NAME) $(OBJECT)
		ranlib $(NAME)
		rm -f $(OBJECT)
clean:
		rm -f $(OBJECT)
fclean: clean
		rm -f $(NAME)
re:
	fclean all
