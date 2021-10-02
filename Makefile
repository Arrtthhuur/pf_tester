# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abeznik <abeznik@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/20 18:39:56 by abeznik       #+#    #+#                  #
#    Updated: 2021/10/02 17:35:02 by anonymous     ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c \
			ft_conversions.c \
			ft_printconv.c \
			utils/ft_putchar.c \
			utils/ft_putstr.c \
			utils/ft_putnbr.c \
			utils/ft_hex_conv.c \
			utils/ft_hexlong_conv.c \
			utils/ft_tolower.c \
			utils/ft_itoa.c \
			utils/ft_utoa.c \

MAINS	=	main.c

OBJS	=	$(SRCS:.c=.o)

MAIN	=	$(MAINS:.c=.o)

CC		=	gcc
RM		=	rm -f
CFLAGS	=	-I. -Werror -Wextra -Wall

NAME	=	libftprintf.a

all:		$(NAME)

$(NAME): 	$(OBJS)
	ar cr $(NAME) $(OBJS)
	@echo "[INFO] Created libftprintf.a!"

norm:
	norminette ./utils/
	@echo
	norminette ./$(SRCS)

clean:
	$(RM) $(OBJS) $(MAIN)
	@echo "[INFO] Cleaned object files!"

fclean:		clean
	$(RM) $(NAME)
	@echo "[INFO] Cleaned object and executable files!"

oclean:
	$(RM) *.out
	@echo "[INFO] Cleaned .out!"

printf:
	$(CC) $(CLFAGS) $(SRCS) $(MAINS)

debug:
	$(CC) -g3 $(SRCS) $(MAINS)
	lldb a.out

del:	mclean fclean oclean
	@echo "[INFO] Deleted!"

re:			fclean all
	@echo "[INFO] Cleaned and recompiling!"

.PHONY:		all clean fclean mclean re
