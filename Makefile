# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abeznik <abeznik@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/03 15:23:47 by abeznik       #+#    #+#                  #
#    Updated: 2021/10/03 17:52:41 by abeznik       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

UTILS	=	./utils/utils.a

NAME	=	libftprintf.a

SOURCES	=	ft_printf.c \
			pf_conversions.c \
			pf_print.c \

SRC_DIR	=	srcs

OBJ_DIR	=	obj

HEADER	=	includes

SRCS = $(addprefix $(SRC_DIR)/,$(SOURCES))

OBJS = $(addprefix $(OBJ_DIR)/,$(SOURCES:.c=.o))

CC		=	gcc
RM		=	rm -f
FLAGS	=	-I. -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
	make -C ./utils
	cp $(UTILS) $(NAME)
	@echo
	ar cr $(NAME) $(OBJS)
	@echo

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)/libftprintf.h
	@mkdir -p obj
	$(CC) -c $(FLAGS) -I $(HEADER) -o $@ $<
	@echo

norme:
	@make norme -C ./utils
	norminette ./$(SRC_DIR)
	@echo
	norminette ./$(HEADER)
	@echo

printf:
	@make all
	$(CC) $(FLAGS) $(SRCS) misc/main.c $(NAME)
	@echo

out:	./a.out
	./a.out

clean:
	@make clean -C ./utils
	@echo
	$(RM) $(OBJS)
	@echo
	$(RM) -r $(OBJ_DIR)
	@echo

fclean: clean
	make fclean -C ./utils
	@echo
	$(RM) $(NAME)
	@echo

del:	fclean
	$(RM) *.out
	@echo

re: fclean all

.PHONY: fclean re norme all clean