NAME = ft_display_file

# Compilation
CC = cc

CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = ft_display_file.c \
		ft_putstr_error.c \
		main.c 

# Object files
OBJS = $(SRCS:.c=.o)

# rules
all : $(NAME)

.c.o: 
	$(CC) $(CFLAGS) -c -include display_file.h $< -o ${<:.c=.o}

$(NAME) : $(OBJS)
	${CC} ${CFLAGS} -o $@ ${OBJS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf $(NAME)

re: fclean all