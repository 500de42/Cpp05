SRC = srcs/Bureaucrat.cpp srcs/main.cpp srcs/AForm.cpp srcs/PresidentialPardonForm.cpp srcs/Intern.cpp srcs/RobotomyRequestForm.cpp srcs/ShrubberyCreationForm.cpp
NAME = Intern
FLAGS = c++ -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
	$(FLAGS) $(SRC) -o $@

clear :

fclean : clear
	rm -rf $(NAME)

re : fclean all