# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abeznik <abeznik@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/20 18:39:56 by abeznik       #+#    #+#                  #
#    Updated: 2021/09/29 16:35:15 by abeznik       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c $\
			ft_format_s.c $\
			ft_format_c.c $\
			ft_format_d.c $\
			ft_format_p.c $\
			utils/ft_putchar.c $\
			utils/ft_putstr.c $\
			utils/ft_strjoin.c $\
			utils/ft_memmove.c $\
			utils/ft_substr.c $\
			utils/ft_calloc.c $\
			utils/ft_memset.c $\
			utils/ft_bzero.c $\
			utils/ft_strdup.c $\
			utils/ft_strlen.c $\
			utils/ft_strlcat.c $\

MAINS	=	main.c

OBJS	=	$(SRCS:.c=.o)

MAIN	=	$(MAINS:.c=.o)

CC		=	gcc
RM		=	rm -f
CFLAGS	=	-I. -Wall -Wextra -Werror

NAME	=	libftprintf.a

all:		$(NAME)

$(NAME): 	$(OBJS)
	ar cr $(NAME) $(OBJS)
	@echo "[INFO] Created libftprintf.a!"

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
