NAME = usefull_lib.a

SRC = src/*.c

OBJ = $(SRC:.c=.o)

CPPFLAGS = -I.

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
