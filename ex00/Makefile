
SRC = ClapTrap.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = claptrap

all: $(NAME)

%.o: %.cpp %.hpp
	$(CC) $(CPPFLAGS) -c -o $@ $<

main.o: main.cpp
	$(CC) $(CPPFLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re