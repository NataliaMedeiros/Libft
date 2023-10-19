#include <string.h>
#include <stdio.h>
#include "../libft/libft.h"

char *string_gen(int size);

void assert(int condition);

int main(void)
{
//test 0 - should return zero
    char *s0 = "avocado";
    char *c0 = "avocado";
    int n0 = 6;

    assert(ft_memcmp(s0, c0, n0) == memcmp(s0, c0, n0));
    printf("test 0 -> my function '%d' and original \
            function = '%d'\n", ft_memcmp(s0, c0, n0), \
            memcmp(s0, c0, n0));
//test 1 - should find correspondence

//test 2 - edge case len equal 0 (should return null)
   
//test 5 - Egde case len bigger than big
 
//test 6 - Egde case matching at the and and len = big string length
    
//test 9 - Egde case big contains multiple matches

//test 11 - Egde case Case sensitivity
   
//test 12 - Egde case Case sensitivity
   
//final
    printf("Test succed\n");
    return (0);
}