# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/23 20:42:29 by zsafkhan          #+#    #+#              #
#    Updated: 2024/04/14 15:24:01 by zsafkhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
HEADER = libft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS			=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
					ft_putchar_fd.c ft_tolower.c ft_toupper.c ft_memset.c ft_bzero.c \
					ft_memcpy.c ft_memmove.c
					

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	
main: $(NAME) main.c
	$(CC) $(CFLAGS) main.c -o main -L. -lft

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME) main
	./main

clean:
	rm -f $(OBJS)
	rm main
	
fclean: clean
	rm -f $(NAME)
	rm main

re: fclean all


.PHONY: all clean fclean re
