# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 17:50:19 by gmaia-pe          #+#    #+#              #
#    Updated: 2023/10/07 13:21:50 by gmaia-pe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CFILES	= $(wildcard ft_*.c)
OBJS	= $(CFILES:.c=.o)
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

.PHONY: all clean re fclean
