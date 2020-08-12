NAME = usefull_lib.a

SRC =                            \
		src/count_char_in_str.c  \
		src/endwith.c            \
		src/free_array.c         \
		src/get_file_extension.c \
		src/get_str_in_range.c   \
		src/is_in.c              \
		src/is_str_made_of.c     \
		src/print_array.c        \
		src/print_bool.c         \
		src/print_raw_string.c   \
		src/replace.c            \
		src/rev_str.c            \
		src/split.c              \
		src/startwith.c          \
		src/sum_array.c          \

OBJ = $(SRC:.c=.o)

CPPFLAGS = -I./include

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
