CC = clang

NAME = test_map

SRC_MAIN = main.c

SRC_OTHERS = src/my_map.c

SRC_TEST =

SRC = $(SRC_OTHERS)

OBJ = $(SRC:.c=.o) $(SRC_MAIN:.c=.o)

CPPFLAGS = -iquote ./includes

CFLAGS = -Wall -Wextra -g

LDFLAGS =

LDLIBS =

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(LDLIBS)

debug: CFLAGS += -g3 -D DEBUG
debug: fclean $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re debug
