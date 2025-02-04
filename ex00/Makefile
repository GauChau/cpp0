OUT = megaphone
SRC = megaphone.cpp
SRC_OBJS = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -g
CC = c++ -std=c++98

all: $(LIBFT) $(OUT)

$(OUT): $(SRC_OBJS)
	$(CC) $(FLAGS) $(SRC_OBJS) $(OUT)

$(SRC_OBJS): %.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(SRC_OBJS)

fclean: clean
	rm -f $(OUT)

re: fclean all