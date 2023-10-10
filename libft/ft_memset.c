#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *new_b = (unsigned char *)b;
    size_t i;

    i = 0;
    while (i < len)
    {
        new_b[i] = c;
        i++;
    }
    return (b);
}