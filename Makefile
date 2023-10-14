# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmaia-pe <gmaia-pe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 17:50:19 by gmaia-pe          #+#    #+#              #
#    Updated: 2023/10/14 12:53:37 by gmaia-pe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CFILES	= $(wildcard ft_*.c)
OBJS	= $(CFILES:.c=.o)
BONUS_CFILES	= $(wildcard *_bonus.c)
BONUS_OBJS	= $(BONUS_CFILES:.c=.o)
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar vcrs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(BONUS_OBJS)
	ar vcrs $(NAME) $(BONUS_OBJS)

.PHONY: all clean re fclean
