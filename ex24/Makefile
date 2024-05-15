SRC_SOURCE_FILES = ft_strcmp.c ft_putstr.c ft_putchar.c ft_strlen.c ft_swap.c
SRCS             = $(addprefix $(SRC), $(SRC_SOURCE_FILES))
SRC_OBJS         = $(SRCS:.c=.o)
OUTPUT           = libft.a
SRC              = ./srcs/
HEADERS          = ./includes/

CC               = cc

all : $(OUTPUT)

$(OUTPUT) : $(SRC_OBJS)
	ar rc $(OUTPUT) $(SRC_OBJS)
	

.c.o :
	$(CC) -Wall -Wextra -Werror -I $(HEADERS) -c $< -o $(<:.c=.o)

clean :
	rm -rf $(SRC_OBJS)

fclean : clean
	rm -f $(OUTPUT)

re : fclean all

.PHONY: all fclean all re