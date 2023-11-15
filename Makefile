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

SOURCES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		 ft_strlen.c ft_tolower.c ft_toupper.c ft_strncmp.c ft_memcmp.c \
		 ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_strchr.c ft_strrchr.c \
		 ft_strnstr.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		 ft_memchr.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c \
		 ft_putlendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		 ft_itoa.c ft_striteri.c ft_strmapi.c ft_split.c

BONUS = ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstadd_front.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ = $(SOURCES:.c=.o)
OBJ_BONUS = $(BONUS:.c=.o)
CC = gcc
CFLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)

	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(OBJ_BONUS)

	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

%o: %c

	$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re