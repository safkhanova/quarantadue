# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/30 16:42:23 by zsafkhan          #+#    #+#              #
#    Updated: 2024/07/31 18:50:06 by zsafkhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

OBJS = ${SRCS:.c=.o}


RM		= rm -f

GCCF = gcc -Wall -Wextra -Werror

LIB = ar -rcs

SRCS =	ft_printf.c\
		ft_putchar_fd.c\
		ft_putchar.c\
		ft_puthex.c\
		ft_putnbr_fd.c\
		ft_putunbr_fd.c\
		ft_putstr_fd.c\
		ft_strlen.c\
		ft_putptr.c\

.c.o:
		${GCCF} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		${LIB} ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

