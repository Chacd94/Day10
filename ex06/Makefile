# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/27 14:50:27 by cdupuis           #+#    #+#              #
#    Updated: 2018/02/28 19:19:38 by cdupuis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = do_op.c outils.c fonctions.c

OBJ	= $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(CFLAGS) $(SRC)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all
