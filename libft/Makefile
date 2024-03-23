LIB_NAME = libft.a
SRC_NAME = ft_isalpha.c ft_isdigit.c ft_strlen.c ft_isalnum.c ft_isascii.c \
			ft_isprint.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
			ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ_DIR = obj
OBJ_NAME = $(addprefix $(OBJ_DIR)/, $(SRC_NAME:.c=.o))
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(LIB_NAME)

$(LIB_NAME): $(OBJ_NAME)
	ar rc $(LIB_NAME) $(OBJ_NAME)
	ranlib $(LIB_NAME)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_NAME) $(LIB_NAME)

fclean: clean
	rm -f $(LIB_NAME)

re: fclean all
