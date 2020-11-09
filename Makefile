NAME = libmy.a

SRC_DIR = src

COMMON_SRC =                            \
		$(SRC_DIR)/array_len.c          \
		$(SRC_DIR)/count_char_in_str.c  \
		$(SRC_DIR)/endwith.c            \
		$(SRC_DIR)/free_array.c         \
		$(SRC_DIR)/get_file_content.c   \
		$(SRC_DIR)/get_file_extension.c \
		$(SRC_DIR)/get_str_in_range.c   \
		$(SRC_DIR)/is_in.c              \
		$(SRC_DIR)/is_str_made_of.c     \
		$(SRC_DIR)/join_array.c         \
		$(SRC_DIR)/print_array.c        \
		$(SRC_DIR)/print_bool.c         \
		$(SRC_DIR)/print_raw_string.c   \
		$(SRC_DIR)/range.c              \
		$(SRC_DIR)/replace.c            \
		$(SRC_DIR)/rev_str.c            \
		$(SRC_DIR)/split.c              \
		$(SRC_DIR)/startwith.c          \
		$(SRC_DIR)/strip.c              \
		$(SRC_DIR)/sum_array.c          \

MAP_DIR = $(SRC_DIR)/data_struct/map
MAP_SRC = $(MAP_DIR)/src/my_map.c

STRING_DIR = $(SRC)/data_struct/string

SRC =$(COMMON_SRC) $(MAP_SRC)

OBJ = $(SRC:.c=.o)

INCLUDE_DIRS = -iquote ./include                   \
		   -iquote src/data_struct/map/includes    \
		   -iquote src/data_struct/stack/includes  \
		   -iquote src/data_struct/string/includes \
		   -iquote src/data_struct/vector/includes \
		   -iquote src/data_struct/queue/includes  \

CPPFLAGS = -Wall -Wextra

%.o:	%.c
			@$(CC) $(CPPFLAGS) $(INCLUDE_DIRS) -c -o $@ $<
			@echo "$<"

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ)

test:
	$(CC) main.c -L. -lmy $(INCLUDE_DIRS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
