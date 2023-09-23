# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 16:38:42 by ivalimak          #+#    #+#              #
#    Updated: 2023/09/23 16:53:37 by ivalimak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCDIR	= src
OBJDIR	= obj
INCDIR	= inc

SRCS	= $(wildcard $(SRCDIR)/*.c)
OBJS	= $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I $(INCDIR) $(OBJS) -o $(NAME)

debug:
	$(CC) $(CFLAGS) -g -I $(INCDIR) $(SRCS) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
