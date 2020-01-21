# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajeannot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/21 14:25:50 by ajeannot          #+#    #+#              #
#    Updated: 2019/08/21 20:23:41 by ajeannot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main_fct.c op_fct.c print_fct.c

OBJS		= ${SRCS:.c=.o}

NAME		= do-op

CFLAGS		= -Wall -Wextra -Werror

COMMAND		= cc

RM			= rm -f

.c.o:
	 ${COMMAND} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		${COMMAND} -o ${NAME} ${OBJS}

all: ${NAME}

clean:
				${RM} ${OBJS}
			
fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re
