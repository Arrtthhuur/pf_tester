# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abeznik <abeznik@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/20 18:39:56 by abeznik       #+#    #+#                  #
#    Updated: 2021/09/27 16:03:40 by abeznik       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c

MAINS	=	main.c

OBJS	=	$(SRCS:.c=.o)

MAIN	=	$(MAINS:.c=.o)

CC		=	gcc
RM		=	rm -f
CFLAGS	=	-I.

NAME	=	libftprintf.a

all:		$(NAME)

$(NAME): 	$(OBJS)
	ar cr $(NAME) $(OBJS)
	@echo "[INFO] Created"

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
	$(CC) $(SRCS) $(MAINS)

debug:
	$(CC) -g3 $(SRCS) $(MAINS)
	lldb a.out

del:	mclean fclean oclean
	@echo "[INFO] Deleted!"

re:			fclean all
	@echo "[INFO] Cleaned and recompiling!"

.PHONY:		all clean fclean mclean re
