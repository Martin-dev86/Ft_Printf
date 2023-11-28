# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cagarci2 <cagarci2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 18:13:49 by cagarci2          #+#    #+#              #
#    Updated: 2023/09/22 18:13:49 by cagarci2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = "../s"

OBJ = $(SOURCES:.c=.o)
CC = gcc
CFLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)

	ar rcs $(NAME) $(OBJ)

%o: %c

	$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re