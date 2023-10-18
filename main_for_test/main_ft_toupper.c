#include <stdio.h>
#include <ctype.h>
#include "../libft/libft.h"

void assert (int condition);

int main(void)
{
        for (char c = 'a'; c <= 'z'; c++)
    {
        assert(ft_toupper(c) == toupper(c));
        // printf("%c turn into %c\n", c, ft_toupper(c));
    }
    for (char c = 'A'; c <= 'Z'; c++)
    {
        assert(ft_toupper(c) == toupper(c));
        // printf("%c turn into %c\n", c, ft_toupper(c));
    }
        printf("Test succed\n");

    return (0);
}