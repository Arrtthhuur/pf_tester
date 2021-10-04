# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abeznik <abeznik@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/03 16:11:35 by abeznik       #+#    #+#                  #
#    Updated: 2021/10/04 22:17:21 by anonymous     ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	utils.a

SRCS	=	ft_intlen.c \
			ft_itoa.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_strlen.c \
			ft_tolower.c \

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc
RM		=	rm -f
CFLAGS	=	-Wall -Werror -Wextra -I.

all:		$(NAME)

$(NAME):	$(OBJS)
	ar cr $(NAME) $(OBJS)

norme:
	norminette ./$(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: fclean re norme all clean
