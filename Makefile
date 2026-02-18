NAME        = push_swap
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -Iinclude -Ilibft

SRC_DIR     = src
STACK_DIR   = $(SRC_DIR)/stack
CMD_DIR     = $(SRC_DIR)/commands
ALGO_DIR    = $(SRC_DIR)/push_swap
LIBFT_DIR   = libft

SRCS        = $(STACK_DIR)/main.c $(STACK_DIR)/stack_init.c \
              $(STACK_DIR)/stack_utils.c \
              $(STACK_DIR)/errors.c \
              $(CMD_DIR)/push.c $(CMD_DIR)/swap.c \
              $(CMD_DIR)/rotate.c $(CMD_DIR)/rev_rotate.c \
              $(ALGO_DIR)/init_nodes_a.c $(ALGO_DIR)/init_nodes_b.c \
              $(ALGO_DIR)/push_swap_utils.c $(ALGO_DIR)/move_nodes.c \
              $(ALGO_DIR)/sort_three.c $(ALGO_DIR)/sort_stacks.c \
              $(LIBFT_DIR)/*.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re