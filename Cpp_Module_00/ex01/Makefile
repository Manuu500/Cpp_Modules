NAME = ex01

COMPILE = c++

INCLUDES = -IContact -IPhoneBook -IUtils

FLAGS = -Wall -Wextra -Werror -std=c++98 $(INCLUDES) -MMD

OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

HEADER = $(OBJ:.o=.d)

SRC =	main.cpp \
		PhoneBook/Phonebook.cpp \
		Contact/Contact.cpp \

all: $(NAME)

$(NAME): $(OBJ)
	@$(COMPILE) $(FLAGS) -o $@ $^

obj/%.o: %.cpp
	@mkdir -p $(dir $@)git@vogsphere.42malaga.com:vogsphere/intra-uuid-c7a11733-53d3-4dc0-a5d9-1af48bfa42dc-7466227-mruiz-ur
	@$(COMPILE) $(FLAGS) -c $< -o $@

# -include $(HEADER)

clean:
	@rm -rf obj/

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re