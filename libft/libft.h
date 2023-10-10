#include <stdio.h>

#ifndef LIBFT_H
#define LIBFT_H

int	ft_isalnum(int c);

int ft_isalpha(int c);

int ft_isascii(int c);

int	ft_isdigit(char c);

int	ft_isprint(char c);

char *ft_strchr(const char *s, int c);

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);

int ft_strlen(const char *c);

char *ft_strrchr(const char *str, int c);

void *ft_memset(void *b, int c, size_t len);

#endif

