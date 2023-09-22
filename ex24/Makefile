# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 01:09:53 by ivalimak          #+#    #+#              #
#    Updated: 2023/09/23 01:17:44 by ivalimak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= clang
CFLAGS	= -Wall -Wextra -Werror

INC		= includes

SRCS	= srcs/ft_putchar.c \
		  srcs/ft_putstr.c \
		  srcs/ft_strcmp.c \
		  srcs/ft_strlen.c \
		  srcs/ft_swap.c
OBJS	= $(patsubst %.c, %.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	@ar -cqs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
