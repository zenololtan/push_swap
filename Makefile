NAME = pushswap

SRCS =	main.c \
		swap.c \
		checks.c \
		push.c \
		content_functions.c

SRCS_PREFIX = $(addprefix srcs/, $(SRCS))

SRC = $(SRCS_PREFIX)

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

CC = gcc

INCLUDES = -Iinc -Ilibft

TAIL = -lft -Llibft

all: $(NAME)

$(NAME): $(OBJ)
	@make bonus -C libft
	gcc $(FLAGS) $(OBJ) $(INCLUDES) $(TAIL) -o $(NAME)

%.o: %.c
	gcc $(FLAGS) $(INCLUDES) -g -c $< -o $@

clean:
		@make clean -C libft
		rm -f $(OBJ)

fclean: clean
		@make fclean -C libft
		rm -f $(NAME).a

re: fclean all

