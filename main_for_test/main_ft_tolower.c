#include <bsd/stdio.h>
#include <ctype.h>
#include "../libft/libft.h"

void assert (int condition);

int main(void)
{
    for (char c = 'a'; c <= 'z'; c++)
    {
        assert(ft_tolower(c) == tolower(c));
        // printf("%c turn into %c\n", c, ft_tolower(c));
    }
    for (char c = 'A'; c <= 'Z'; c++)
    {
        assert(ft_tolower(c) == tolower(c));
        // printf("%c turn into %c\n", c, ft_tolower(c));
    }
        printf("Test succed\n");

    return (0);
}