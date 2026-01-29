NAME = minishell
CC = gcc
CFLAGS = -Wall -Werror -Wextra
UNAME = $(shell uname)
INC = -I$(INC_DIR) -I$(LIBFT_DIR) -I$(INC_DIR)/printf
LIBS = $(LIBFT_DIR)/libft.a -lreadline
RM = rm -rf

ifeq ($(UNAME), Darwin)
	INC += -I/opt/vagrant/embedded/include
	LIBS += -L/opt/vagrant/embedded/lib
endif

SRCS = \
		$(SRC_DIR)/builtins/built.c\
		$(SRC_DIR)/builtins/ft_cd.c\
		$(SRC_DIR)/builtins/ft_echo.c\
		$(SRC_DIR)/builtins/ft_env.c\
		$(SRC_DIR)/builtins/ft_exit.c\
		$(SRC_DIR)/builtins/ft_export_utils.c\
		$(SRC_DIR)/builtins/ft_export.c\
		$(SRC_DIR)/builtins/ft_pwd.c\
		$(SRC_DIR)/builtins/ft_unset.c\
		$(SRC_DIR)/exec/cmd_utils.c\
		$(SRC_DIR)/exec/signal.c\
		$(SRC_DIR)/exec/ft_executer.c\
		$(SRC_DIR)/global_utils/env_utils.c\
		$(SRC_DIR)/global_utils/free.c\
		$(SRC_DIR)/global_utils/ft_split_shell.c\
		$(SRC_DIR)/lexer/lexer_utils.c\
		$(SRC_DIR)/lexer/lexer.c\
		$(SRC_DIR)/lexer/treat_tokens.c\
		$(SRC_DIR)/lexer/var_env.c\
		$(SRC_DIR)/lexer/var_utils.c\
		$(SRC_DIR)/parser/fill_node.c\
		$(SRC_DIR)/parser/heredoc.c\
		$(SRC_DIR)/parser/parser_utils.c\
		$(SRC_DIR)/parser/parser.c\


OBJS = $(OBJ_DIR)/main.o $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

#═════════════════════════  directorios(rutas)  ═══════════════════════════════#
SRC_DIR = src
OBJ_DIR = obj

INC_DIR = inc
LIBFT_DIR = $(INC_DIR)/libft

PRINTF_SRCS := $(wildcard $(INC_DIR)/printf/*.c) $(wildcard $(INC_DIR)/printf/pf/*.c)
PRINTF_OBJS := $(patsubst $(INC_DIR)/printf/%.c,$(OBJ_DIR)/libft/%.o,$(wildcard $(INC_DIR)/printf/*.c)) \
		$(patsubst $(INC_DIR)/printf/pf/%.c,$(OBJ_DIR)/libft/%.o,$(wildcard $(INC_DIR)/printf/pf/*.c))

LIBFT_SRCS := $(wildcard $(LIBFT_DIR)/libft/*.c)
LIBFT_OBJS := $(patsubst $(LIBFT_DIR)/libft/%.c,$(OBJ_DIR)/libft/%.o,$(LIBFT_SRCS)) $(PRINTF_OBJS)

#══════════════════════════════  Colors  ══════════════════════════════════════#
RED		= \033[31;1m
GREEN	= \033[32;1m
CIAN	= \033[36m
BLUE	= \033[1;38;5;27m
YELLOW	= \033[33m;1m
WHITE	= \033[37;1m
U_LINE	= \033[4m
END 	= \033[0m

#═══════════════════════════════  ARGS   ══════════════════════════════════════#
all: $(NAME)

show:
	@printf "OS	: $(UNAME)\n"
	@printf "NAME  	: $(NAME)\n"
	@printf "CC	: $(CC)\n"
	@printf "CFLAGS	: $(CFLAGS)\n"
	@printf "SRCS	:$(addprefix \n\t , $(notdir $(SRCS)))\n"

clean:
	@$(RM) $(OBJ_DIR)
	@$(RM) $(OBJ_DIR)/libft
	@echo "\n$(GREEN)[Cleaned $(CIAN) '$(NAME) objects' $(GREEN)successfully]\n$(END)"

fclean: clean
	@$(RM) $(LIBFT_DIR)/libft.a
	@$(RM) minishell
	@echo "$(GREEN)[Removed $(CIAN)'$(NAME)' $(GREEN)successfully]\n$(END)"

re: fclean all

#══════════════════════════════  Normas  ══════════════════════════════════════#
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/minishell.h
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)/builtins
	@mkdir -p $(OBJ_DIR)/exec
	@mkdir -p $(OBJ_DIR)/global_utils
	@mkdir -p $(OBJ_DIR)/lexer
	@mkdir -p $(OBJ_DIR)/parser
	@echo "$(BLUE)MINISHELL Compiling:$(END) $(notdir $<)"
	@$(CC) $(INC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/main.o: main.c $(INC_DIR)/minishell.h
	@mkdir -p $(OBJ_DIR)
	@echo "$(BLUE)MINISHELL Compiling:$(END) main.c"
	@$(CC) $(INC) $(CFLAGS) -c $< -o $@


$(OBJ_DIR)/libft/%.o: $(LIBFT_DIR)/libft/%.c
	@mkdir -p $(OBJ_DIR)/libft
	@echo "$(BLUE)LIBFT Compiling:$(END) $(notdir $<)"
	@$(CC) $(INC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/libft/%.o: $(INC_DIR)/printf/%.c
	@mkdir -p $(OBJ_DIR)/libft
	@echo "$(BLUE)LIBFT(printf) Compiling:$(END) $(notdir $<)"
	@$(CC) $(INC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/libft/%.o: $(INC_DIR)/printf/pf/%.c
	@mkdir -p $(OBJ_DIR)/libft
	@echo "$(BLUE)LIBFT(printf/pf) Compiling:$(END) $(notdir $<)"
	@$(CC) $(INC) $(CFLAGS) -c $< -o $@

$(LIBFT_DIR)/libft.a: $(LIBFT_OBJS)
	@ar rcs $@ $(LIBFT_OBJS)
	@echo "$(GREEN)[Created $(CIAN)$(LIBFT_DIR)/libft.a$(GREEN)]$(END)"

$(NAME): $(OBJS) $(LIBFT_DIR)/libft.a
	@$(CC) $(OBJS) $(CFLAGS) $(INC) $(LIBS) -g -o $@
	@echo "\n$(GREEN)[Compiled $(RED) $@ $(GREEN)successfully]\n$(END)"

