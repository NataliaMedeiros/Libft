#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../libft/libft.h"

char *string_gen(int size);

void assert(int condition);

int main(void)
{
    for (int i = 0; i <= 100; i++)
    {
        char *s1 = string_gen(i);
        char *s2 = s1;
        int n = rand() % 50;
        assert(ft_strncmp(s1, s2, n) == strncmp(s1, s2, n));
    }
    for (int i = 0; i <= 100; i++)
    {
        char *s1 = string_gen(rand() % 20);
        char *s2 = string_gen(rand() % 20);
        int n = rand() % 50;
        assert(ft_strncmp(s1, s2, n) == strncmp(s1, s2, n));
    }
    assert(ft_strncmp("AGRIws0n", "Avo98ovItg", 1) \
            == strncmp("AGRIws0n", "Avo98ovItg", 1));
    assert(ft_strncmp("avocado", "avocado", 0) \
            == strncmp("avocado", "avocado", 0));
    assert(ft_strncmp("avocado", "avocado", 10) \
            == strncmp("avocado", "avocado", 10));
    assert(ft_strncmp("avo", "avocado", 5) \
            == strncmp("avo", "avocado", 5));
    assert(ft_strncmp("avocado", "avo", 5) \
            == strncmp("avocado", "avo", 5));
    assert(ft_strncmp("", "", 5) \
            == strncmp("", "", 5));
    return (0);
}