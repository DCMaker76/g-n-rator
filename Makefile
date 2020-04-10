##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

NAME	= program

CC	= gcc

RM	= rm -f

SRCS	= ./generator4.c \
	  ./main.c \
	  ./my_getnbr.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
