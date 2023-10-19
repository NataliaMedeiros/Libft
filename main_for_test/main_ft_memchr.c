#include <string.h>
#include <stdio.h>
#include "../libft/libft.h"

char *string_gen(int size);

void assert(int condition);

int main(void)
{
//test 0 - should find correspondence
    char *s0 = "avocado";
    char c0 = 'c';
    int n0 = 6;

    assert(ft_memchr(s0, c0, n0) == memchr(s0, c0, n0));
    printf("test 0 = %p\n", ft_memchr(s0, c0, n0));
//test 1 - should find correspondence
    n0 = 4;
    assert(ft_memchr(s0, c0, n0) == memchr(s0, c0, n0));
    // printf("test 1 = %p \n", ft_memchr(s0, c0, n0));
//test 2 - edge case len equal 0 (should return null)
    n0 = 0;
    assert(ft_memchr(s0, c0, n0) == memchr(s0, c0, n0));
    // printf("test 2 = %p \n", ft_memchr(s0, c0, n0));
//test 5 - Egde case len bigger than big
    c0 = 'v';
    n0 = 50;
    assert(ft_memchr(s0, c0, n0) == memchr(s0, c0, n0));
    // printf("test 5 = %p \n", ft_memchr(s0, c0, n0));
//test 6 - Egde case matching at the and and len = big string length
    c0 = 'e';
    n0 = ft_strlen(s0);
    assert(ft_memchr(s0, c0, n0) == memchr(s0, c0, n0));
    // printf("test 6 = %p \n", ft_memchr(s0, c0, n0));
//test 9 - Egde case big contains multiple matches
    s0 = "one cat, two cats, three cats, a lot of cats";
    c0 = 'c';
    n0 = ft_strlen(s0);
    // char* result = ft_memchr(s0, c0, n0);
    assert(ft_memchr(s0, c0, n0) == memchr(s0, c0, n0));
    // printf("test 9 = %p is '%s'\n", ft_memchr(s0, c0, n0), result);
//test 11 - Egde case Case sensitivity
    s0 = "Case SEnsitivity";
    c0 = 'S';
    n0 = 20;
    assert(ft_memchr(s0, c0, n0) == memchr(s0, c0, n0));
    // printf("test 11 = %p \n", ft_memchr(s0, c0, n0));
//test 12 - Egde case Case sensitivity
    s0 = "Case SEnsitivity";
    c0 = 's';
    n0 = 20;
    assert(ft_memchr(s0, c0, n0) == memchr(s0, c0, n0));
    // printf("test 11 = %p \n", ft_memchr(s0, c0, n0));
//final
    printf("Test succed\n");
    return (0);
}