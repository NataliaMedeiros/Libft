# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: natalia <natalia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 17:19:02 by natalia           #+#    #+#              #
#    Updated: 2023/10/24 17:46:27 by natalia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Library = libft
Files = ft_isalpha \
		ft_isascii \
		ft_isdigit \
		ft_isprint \
		ft_strchr \
		ft_strlcat \
		ft_strlcpy \
		ft_strrchr \
		ft_strlen \
		ft_memset \
		ft_bzero \
		ft_atoi \
		ft_isalnum \
		ft_strdup \
		ft_tolower \
		ft_toupper \
		ft_memchr \
		ft_memcmp \
		ft_strncmp \
		ft_strnstr \
		ft_memcpy \
		ft_memmove \
		ft_calloc \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_striteri \
		ft_putchar_fd\
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \

OUTN = $(Library).a
CFILES = $(Files:%=%.c)
OFILES = $(CFILES:%.c=%.o)
#NAME speciefies the name of the main output fine (in this case libft.a)
NAME = $(OUTN)

CC = cc
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
#$(NAME):
#	$(CC) $(CFLAGS) -c $(CFILES) -I./

$(NAME): $(OFILES)
	ar -rc $(OUTN) $(OFILES)
#the line above creates or updates a file usually in a static library

all: $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
