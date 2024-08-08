# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/04 15:29:49 by anschmit          #+#    #+#              #
#    Updated: 2024/08/08 15:50:36 by anschmit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Werror -Wextra -I/home/anschmit/done/libft/includes

SRCS = main.c push.c swap.c rotate.c reverse_rotate.c

OBJS = $(SRCS:%.c=%.o)

LIBFT_DIR = /home/anschmit/done/libft

all: $(NAME)

$(NAME): $(OBJS) libft
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -L$(LIBFT_DIR) -lft

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

libft:
		$(MAKE) -C $(LIBFT_DIR)

clean:	
		$(MAKE) clean -C $(LIBFT_DIR)
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all