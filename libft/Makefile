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

OUTN = $(Library).a
CFILES = $(Files:%=%.c)
OFILES = $(CFILES:%.c=%.o)
#NAME speciefies the name of the main output fine (in this case libft.a)
NAME = $(OUTN)

CC = cc
CFLAGS = -Wall -Wextra -Werror

$(NAME):
	$(CC) $(CFLAGS) -c $(CFILES) -I./

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
