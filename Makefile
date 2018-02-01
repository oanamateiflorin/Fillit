# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moana <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/31 09:36:07 by moana             #+#    #+#              #
#    Updated: 2018/01/31 16:24:55 by moana            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS = srcs/main.c srcs/verificare.c srcs/fillit.c srcs/extra.c srcs/extra1.c srcs/extra2.c

INC = includes/

OBJ = *.o

FLAGS = -Wall -Wextra -Werror

$(NAME) :
		@make -C libft
		@gcc $(FLAGS) -I $(INC) -c $(SRCS)
		@gcc $(OBJ) -L libft/ -lft -o $(NAME)

all: $(NAME)

clean:
		@make -C libft/ clean
		@rm -f $(OBJ)

fclean: clean
		@make -C libft/ fclean
		@rm -f $(NAME)

re:	fclean all
