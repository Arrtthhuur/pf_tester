# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abeznik <abeznik@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/03 16:11:35 by abeznik       #+#    #+#                  #
#    Updated: 2021/10/04 18:48:37 by abeznik       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	utils.a

SOURCES	=	ft_putchar.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_hex_conv.c \
			ft_hexlong_conv.c \
			ft_tolower.c \
			ft_itoa.c \
			ft_utoa.c \
			ft_strlen.c \
			ft_intlen.c \
			pf_uprint.c \

OBJS	=	$(SOURCES:.c=.o)

CC		=	gcc
RM		=	rm -f
FLAGS	=	-c -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
	ar cr $(NAME) $(OBJS)
	@echo

norme:
	norminette ./$(SOURCES)
	@echo

clean:
	$(RM) $(OBJS)
	@echo

fclean: clean
	$(RM) $(NAME)
	@echo

re: fclean all
	@echo

.PHONY: fclean re norme all clean
	@echo

bonus: $(OBJS)
	$(CC) $(FLAGS) $(OBJS)
	ar cr $(NAME) $(OBJS)