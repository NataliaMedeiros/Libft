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

OUTN = $(Library).a
CFILES = $(Files:%=%.c)
OFILES = $(CFILES:%.c=%.o)
#NAME speciefies the name of the main output fine (in this case libft.a)
NAME = $(OUTN)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

$(NAME):
	$(CC) $(CFLAGS) -c $(CFILES) -I./
	ar -rc $(OUTN) $(OFILES)
#the line above creates or updates a file usually in a static library

all: $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean

.PHONY: all, clean, fclean, re
