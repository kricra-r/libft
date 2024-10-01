# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: kricra-r <kricra-r@student.42.fr>          #+#  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2024-09-27 16:37:23 by kricra-r          #+#    #+#             #
#   Updated: 2024-09-27 16:37:23 by kricra-r         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

LIB		= ar -rcs
NAME	= libft.a
SRC		= $(wildcard *.c)
OBJ		= ${SRC:.c=.o}
RM		= rm -f
CC		= cc
CCFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: all fclean clean

.PHONY: all fclean clean re