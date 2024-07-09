# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/09 15:22:37 by dsedlets          #+#    #+#              #
#    Updated: 2024/07/09 15:46:50 by dsedlets         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = push_swap.c \
	  free_handler.c \
	  initiation.c \
	  array_maker.c \
	  algorithms.c \
	  algorithms2.c \
	  butterfly.c \
	  almost_sorted.c \
	  low_num.c

OBJS = $(SRC:.c=.o)
HEAD = push_swap.h
NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra -g #-fsanitize=address
RM = rm -rf
LIBFT = ft
LIBFT_DIR = libft

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) bonus -C libft
	$(MAKE) -C libft
	$(CC) $(CFLAGS) $(OBJS) ./libft/libft.a -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C libft

clean:
	$(RM) - $(NAME)
	make clean -C libft
	$(RM) -rf libft/libft.a
	rm -f ${OBJS}

re: fclean all

.PHONY: all clean fclean re
