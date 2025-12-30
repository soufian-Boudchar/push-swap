NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
OBJ_DIR = object_files

LIBFT_SRC = helper_ft/ft_add_back.c helper_ft/ft_join.c helper_ft/ft_strjoin.c helper_ft/strcat.c \
            helper_ft/ft_add_front.c helper_ft/ft_new_node.c helper_ft/ft_strlen.c helper_ft/ft_atoi.c \
            helper_ft/ft_split.c helper_ft/ft_substr.c helper_ft/ft_free_lists.c helper_ft/ft_strdup.c

SRC =       src/parsing/ft_check_args.c src/parsing/ft_init_stack.c \
 	        src/utils/ft_free_tokens.c push_swap.c

OBJ = $(SRC:.c=.o)
LIBFT_OBJ = $(LIBFT_SRC:.c=.o)

HEADERS = ./includes/push_swap.h ./helper_ft/libft.h



all: $(NAME)
		
$(NAME): $(OBJ) $(LIBFT_OBJ)
	@$(CC) $(OBJ) $(LIBFT_OBJ) -o $(NAME)

%.o: %.c $(HEADERS)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ) $(LIBFT_OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
