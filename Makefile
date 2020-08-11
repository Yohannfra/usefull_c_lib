NAME = usefull_lib.a

SRC =                          \
		src/find_extension.c   \
		src/free_array.c       \
		src/get_str_in_range.c \
		src/is_in.c            \
		src/print_array.c      \
		src/print_raw_string.c \
		src/split.c            \

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
