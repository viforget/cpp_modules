NAME = Smart_Dogs_and_Cats

FLAGS = -Wall -Wextra -Werror -I inc

CXX = @clang++ $(FLAGS)

SRCS =	main.cpp\
		src/Animal.class.cpp\
		src/Cat.class.cpp\
		src/Dog.class.cpp\
		src/WrongAnimal.class.cpp\
		src/WrongCat.class.cpp\
		src/WrongDog.class.cpp\
		src/Brain.class.cpp\

OBJ = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
			$(CXX) $(OBJ) -o $(NAME)
			@echo "\033[32mCOMPILATION OK\033[0m"
			
clean:
		@rm -rf $(OBJ)
		@echo "\033[36mCLEAN OK\033[0m"

fclean: clean
		@rm -rf $(NAME)
		@echo "\033[36mFCLEAN OK\033[0m"

re: fclean all

.PHONY: all fclean clean re
