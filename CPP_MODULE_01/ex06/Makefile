NAME	= harlFilter

SRC		= $(wildcard *.cpp)
OBJ		= $(SRC:.cpp=.o)

RM		= rm -rf
CC		= c++
FLAGS 	= -Wall -Wextra -Werror -std=c++98

all		: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) $(OBJ) $(FLAGS)  -o $(NAME)
		
clean	:
		$(RM) $(OBJ)

fclean	: clean
		$(RM) $(NAME)
	
re		: fclean all