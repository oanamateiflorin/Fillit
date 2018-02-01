# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moana <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/16 08:08:47 by moana             #+#    #+#              #
#    Updated: 2018/01/17 22:18:42 by moana            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	*.c

NAME = libft.a

OBJ =	*.o

$(NAME):
	cc -Wall -Wextra -Werror -I. -c $(SRCS) 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean	all
