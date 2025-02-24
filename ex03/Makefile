NAME = violence

FLAG =  -g -Wall -Wextra -Werror -std=c++98
CC = c++ 

SRC = main.cpp\
		HumanA.cpp\
		HumanB.cpp\
		Weapon.cpp\



OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAG) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re