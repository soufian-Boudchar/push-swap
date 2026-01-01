NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g #<--------delete -g
OBJ_DIR = object_files

LIBFT_SRC = utils/ft_add_back.c utils/ft_join.c utils/ft_strjoin.c utils/strcat.c \
            utils/ft_add_front.c utils/ft_new_node.c utils/ft_strlen.c utils/ft_atoi.c \
            utils/ft_split.c utils/ft_substr.c utils/ft_free_lists.c \
			utils/ft_strdup.c utils/ft_free_tokens.c 	

SRC =       src/parsing/ft_check_args.c 	src/parsing/ft_init_stack.c \
 	        src/operations/ft_swap.c		src/operations/ft_push.c \
			src/operations/ft_rotate.c		src/operations/ft_reverse_rotate.c \
			push_swap.c 
			

OBJ = $(SRC:.c=.o)
LIBFT_OBJ = $(LIBFT_SRC:.c=.o)

HEADERS = ./includes/push_swap.h ./includes/utils.h



all: $(NAME)
		
$(NAME): $(OBJ) $(LIBFT_OBJ)
	@$(CC) $(OBJ) $(LIBFT_OBJ) -o $(NAME)
		
%.o: %.c $(HEADERS)
	@$(CC) $(CFLAGS) -c $< -o $@
		@echo "Compiling → $<"

		
clean:
	@rm -f $(OBJ) $(LIBFT_OBJ)
		
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
