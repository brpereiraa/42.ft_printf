NAME = libftprintf.a
OPTION = -c 
CFLAGS = -Wall -Werror -Wextra $(OPTION)
CC = cc 

LIBFT = ./libft/libft.a

SRCS = src/ft_print_char.c src/ft_print_decimal.c src/ft_print_hexadecimal.c src/ft_print_hexadecimal_upper.c \
		src/ft_print_integer.c src/ft_print_percent.c src/ft_print_pointer.c src/ft_print_str.c src/ft_print_str.c \
		src/ft_print_unsigned_decimal.c src/ft_printf.c


OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(LIBFT):
	@$(MAKE) -C ./libft

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS) $(LIBFT)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRCS) $(LIBFT)
	gcc -shared -o libft.so $(OBJS)

.SILENT: