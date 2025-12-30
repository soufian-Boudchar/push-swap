NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJ_DIR = object_files

LIBFT_SRC = libft/ft_add_back.c libft/ft_join.c libft/ft_strjoin.c libft/strcat.c \
libft/ft_add_front.c libft/ft_new_node.c libft/ft_strlen.c libft/ft_atoi.c \
libft/ft_split.c libft/ft_substr.c libft/ft_free_lists.c libft/ft_strdup.c

SRC = src/parsing/ft_check_args.c src/parsing/ft_init_stack.c \
src/utils/ft_errors.c src/utils/ft_free_tokens.c push_swap.c

OBJ = $(SRC:.c=.o)
LIBFT_OBJ = $(LIBFT_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_OBJ)
	$(CC) $(OBJ) $(LIBFT_OBJ) -o $(NAME)

%.o: %.c push_swap.h libft/libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(LIBFT_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
