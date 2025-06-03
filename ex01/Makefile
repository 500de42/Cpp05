SRC = Bureaucrat.cpp main.cpp Form.cpp
NAME = Bureaucrat
FLAGS = c++ -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
	$(FLAGS) $(SRC) -o $@

clear :

fclean : clear
	rm -rf $(NAME)

re : fclean all
