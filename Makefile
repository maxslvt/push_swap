NAME = push_swap

CFLAGS = -Wall -Wextra -Werror -g

SRC = src/main.c src/stack_initialisation.c src/stack_utils.c src/split.c src/sort_three.c src/handle_errors.c src/init_a_to_b.c src/init_b_to_a.c src/push.c src/rev_rotate.c src/rotate.c src/sort_stacks.c src/swap.c src/utils.c

OBJETS = $(SRC:.c=.o)

LIBFT_DIR = ./src/libft/

LIBFT = libft.a

RED=\033[1;31m
GREEN=\033[1;32m
YELLOW=\033[1;33m
BLUE=\033[1;34m
MAGENTA=\033[1;35m
CYAN=\033[1;36m
WHITE=\033[1;37m

$(NAME): $(LIBFT_DIR)$(LIBFT) $(OBJETS)
	@printf "\r\033[K🟡 ${YELLOW}[PUSH_SWAP] Compiling push_swap...${WHITE}\n"
	@cc $(CFLAGS) -o $(NAME) $(OBJETS) $(LIBFT_DIR)$(LIBFT)
	@printf "\r\033[K✅ ${GREEN}[PUSH_SWAP] Compiled !${WHITE}\n"

$(LIBFT_DIR)$(LIBFT):
	@make -s -C $(LIBFT_DIR) --no-print-directory

.c.o:
	@printf "\r🟡 ${MAGENTA}[COMPILING📦] $<${WHITE}"
	@cc ${CFLAGS} -c $< -o $@

all: $(NAME)

clean:
	@printf "🟡 ${MAGENTA}[CLEANING🧹] .o files...${WHITE}\n"
	@rm -f $(OBJETS)
	@printf "✅ ${GREEN}[CLEANED🧹]${WHITE}\n"

fclean: clean
	@printf "🟡 ${MAGENTA}[CLEANING🧹] libft...${WHITE}\n"
	@make -s -C $(LIBFT_DIR) fclean --no-print-directory >/dev/null
	@rm -f $(NAME)
	@printf "✅ ${GREEN}[CLEANED🧹]${WHITE}\n"

re: fclean all

.PHONY: all clean fclean re