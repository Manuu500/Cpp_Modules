NAME = ex03

COMPILE = c++

INCLUDES = -IZombie -IHumanA -IHumanB -IWeapon

FLAGS = -Wall -Wextra -Werror -std=c++98 $(INCLUDES) -MMD -g

OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

HEADER = $(OBJ:.o=.d)

SRC =	main.cpp \
		HumanA/HumanA.cpp \
		HumanB/HumanB.cpp \
		Weapon/Weapon.cpp


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