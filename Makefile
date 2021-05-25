NAME = pushswap

OBJ_DIR=	./obj

SRCS =	main.c \
		funcs.c \
		checks.c \
		content_functions.c \
		tests.c

SRCS_PREFIX = $(addprefix srcs/, $(SRCS))

SRC = $(SRCS_PREFIX)

OBJ := $(SRC:%.c=$(OBJ_DIR)/%.o)

FLAGS = -Wall -Wextra -Werror

CC = gcc

INCLUDES = -Iinc -Ilibft

TAIL = -lft -Llibft

all: $(NAME)

$(NAME): $(OBJ)

	@make bonus -C libft
	@$(CC) $(FLAGS) $(OBJ) $(INCLUDES) $(TAIL) -o $(NAME)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(FLAGS) $(INCLUDES) -g -c $< -o $@

clean:
		@make clean -C libft
		# rm -rf $(OBJ)
		rm -rf $(OBJ_DIR)

fclean: clean
		@make fclean -C libft
		rm -f $(NAME)

re: fclean all

