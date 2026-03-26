NAME = ex00

COMPILE = c++

INCLUDES = -IClapTrap

FLAGS = -Wall -Wextra -Werror -std=c++98 $(INCLUDES) -MMD

OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

HEADER = $(OBJ:.o=.d)

SRC =	main.cpp \
		ClapTrap/ClapTrap.cpp


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