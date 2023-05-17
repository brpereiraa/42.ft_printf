NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra 
CC = cc 

SRCS = src/ft_print_char.c src/ft_print_decimal.c src/ft_print_hex.c \
		src/ft_print_integer.c src/ft_print_percent.c src/ft_print_pointer.c src/ft_print_str.c src/ft_print_str.c \
		src/ft_print_unsigned_decimal.c src/ft_printf.c


OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft
	cp libft/libft.a .
	mv libft.a ${NAME}
	ar rcs $(NAME) $(OBJS)

clean:
	make clean -C ./libft
	rm -rf $(OBJS)

fclean: clean
	make clean -C ./libft
	rm -rf $(NAME)

re: fclean all

.SILENT: