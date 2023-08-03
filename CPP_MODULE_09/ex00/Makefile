SRCS = $(wildcard *.cpp)

CC = clang++
NAME = btc

CFLAG = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re