NAME = libft.a
CFLAGS += -Wall -Werror -Wextra
INCLUDES = -I lib/inc -I src/ -I inc/
CC = gcc

################################################################################
# Source directories identifiers                                               #
################################################################################

SRCDIR = src/
SRCDIR_CHAR = ft_char/
SRCDIR_IO = ft_io/
SRCDIR_LIST = ft_list/
SRCDIR_MEM = ft_memory/
SRCDIR_NUM = ft_num/
SRCDIR_STR = ft_string/

OBJSRC += $(patsubst %, %.o, $(addprefix \
		  $(addprefix $(SRCDIR), $(SRCDIR_CHAR)), \
		  $(SRC_CHAR)))
OBJSRC += $(patsubst %, %.o, $(addprefix \
		  $(addprefix $(SRCDIR), $(SRCDIR_IO)), \
		  $(SRC_IO)))
OBJSRC += $(patsubst %, %.o, $(addprefix \
		  $(addprefix $(SRCDIR), $(SRCDIR_LIST)), \
		  $(SRC_LIST)))
OBJSRC += $(patsubst %, %.o, $(addprefix \
		  $(addprefix $(SRCDIR), $(SRCDIR_MEM)), \
		  $(SRC_MEM)))
OBJSRC += $(patsubst %, %.o, $(addprefix \
		  $(addprefix $(SRCDIR), $(SRCDIR_NUM)), \
		  $(SRC_NUM)))
OBJSRC += $(patsubst %, %.o, $(addprefix \
		  $(addprefix $(SRCDIR), $(SRCDIR_STR)), \
		  $(SRC_STR)))

################################################################################
# COLOR                                                                        #
################################################################################

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
CYAN = \033[1;36m
RES = \033[0m

################################################################################
# TERMIO SOURCE FILES                                                          #
################################################################################

# AUTOCOMPLETE
SRC_CHAR =	\
			

################################################################################
# RULES                                                                        #
################################################################################

all: $(NAME)

debug: CFLAGS += -g -fsanitize=address -fsanitize=null
	$(NAME)

$(NAME): $(LIBFT) $(OBJSRC)
	@ echo "$(YELLOW)Building library$(RES)"
	ar -rcs $(OBJSRC) $(NAME)

%.o: %.c
	@ echo "$(YELLOW)Compiling $<...$(RES)"
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@/bin/rm -f $(OBJSRC)
	@ echo "$(RED)Cleaning folders of object files...$(RES)"

fclean: clean
	/bin/rm -f $(NAME)
	@ echo "$(RED)Removing library...$(RES)"

re: fclean all
	@ echo "$(GREEN)Library Remade$(RES)"
