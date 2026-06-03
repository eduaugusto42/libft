# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eduaaugu <eduaaugu@student.42sp.org.b      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/18 17:24:11 by eduaaugu          #+#    #+#              #
#    Updated: 2026/06/03 09:54:03 by eduaaugu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlen.c ft_substr.c \
	  ft_bzero.c ft_isdigit.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_tolower.c \
	  ft_calloc.c ft_isprint.c ft_memmove.c ft_strjoin.c ft_strnstr.c ft_toupper.c \
	  ft_isalnum.c ft_itoa.c ft_memset.c ft_strlcat.c ft_strrchr.c ft_isalpha.c \
	  ft_memchr.c ft_split.c ft_strlcpy.c ft_strtrim.c


OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
