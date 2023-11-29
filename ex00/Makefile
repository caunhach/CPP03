# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caunhach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 22:01:06 by caunhach          #+#    #+#              #
#    Updated: 2023/11/23 22:01:08 by caunhach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp ClapTrap.cpp
OBJS = $(SRCS:.cpp=.o)
HDRS = Claptrap.hpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = clapTrap

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
