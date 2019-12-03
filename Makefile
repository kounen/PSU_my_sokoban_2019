NAME	= my_sokoban

CC	= gcc

RM	= rm -f

SRCS	= ./lib/binary_nbr.c \
	  ./lib/hexa_nbr.c \
	  ./lib/integer_nbr.c \
	  ./lib/my_atoi.c \
	  ./lib/my_printf.c \
	  ./lib/my_put_nbr.c \
	  ./lib/my_putchar.c \
	  ./lib/my_putstr.c \
	  ./lib/my_revstr.c \
	  ./lib/my_strlen.c \
	  ./lib/octal_nbr.c \
	  ./lib/print_pointer.c \
	  ./lib/s_str.c \
	  ./lib/switch_letter.c \
	  ./lib/unit_size.c \
	  ./main.c \
	  ./src/before_all.c \
	  ./src/get_map.c \
	  ./src/usage.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -Wall -Wextra

LDFLAGS = -lncurses

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
