NAME = ex02

COMPILE = c++

INCLUDES = -IAnimal -IDog -ICat -IWrongAnimal -IWrongCat -IBrain

FLAGS = -Wall -Wextra -Werror -std=c++98 $(INCLUDES) -MMD

OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

HEADER = $(OBJ:.o=.d)

SRC =	main.cpp \
		Animal/AnimalA.cpp \
		Dog/Dog.cpp \
		Cat/Cat.cpp \
		WrongAnimal/WrongAnimal.cpp \
		WrongCat/WrongCat.cpp \
		Brain/Brain.cpp

all: $(NAME)

$(NAME): $(OBJ)
	@$(COMPILE) $(FLAGS) -o $@ $^

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(COMPILE) $(FLAGS) -c $< -o $@

-include $(HEADER)

clean:
	@rm -rf obj/

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re