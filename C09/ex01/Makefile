# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/21 14:25:50 by ajeannot          #+#    #+#              #
#    Updated: 2019/08/21 14:32:13 by ajeannot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= srcs/ft_putchar.c	srcs/ft_swap.c	srcs/ft_putstr.c	srcs/ft_strlen.c	srcs/ft_strcmp.c

OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

CFLAGS		= -Wall -Wextra -Werror -Iincludes

DIR			= srcs/

COMMAND		= gcc

RM			= rm -f

.c.o:
	 $(COMMAND) $(CFLAGS) -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re
