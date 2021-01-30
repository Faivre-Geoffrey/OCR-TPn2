NAME 			=  The_Hangman_Game

SRC				= main.c fonctions.c

all:			$(NAME)

$(NAME):
				gcc -o $(NAME) $(SRC)

clean:
				rm -rf *.o

fclean:			clean
				rm $(NAME)

re:			fclean all

.PHONY:			all clean fclean re
