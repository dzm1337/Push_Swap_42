NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

# configuration 
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

# all files 
SRCS = src/main.c \
       src/commands/push.c \
       src/commands/swap.c \
       src/commands/rotate.c \
       src/commands/rev_rotate.c \
       src/stack/init_stack.c \
       src/stack/utils.c \
       src/turk/sort.c \
       src/turk/init_nodes.c \
       src/turk/cost.c \
       src/turk/move.c \
       src/errors/validation.c \
       src/errors/free.c

# converting
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

.c.o:
	$(CC) $(CFLAGS) -I ./includes -c $< -o $@

clean:
	rm -f $(OBJS)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
