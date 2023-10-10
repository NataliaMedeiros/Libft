#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "../libft/libft.h"

// #define ASSERT(condition) \
//     if(!(condition)) \
//     { \
//         printf("ATENTION: Test failed at file %s and line %d\n", __FILE__, __LINE__); \
//         return (1); \
//     } 

void assert (int condition);

int	main(void)
{
	char	b[] = "I love coffee!!!";
    char    b2[] = "I love coffee!!!";

    ft_memset(b + 2, '.', 4);
    printf("%s\n", b);
    memset(b2 + 2, '.', 4);
    assert(strcmp(b, b2) == 0);

    char    str1[] = "Hello, World!";
    char    str2[] = "Hello, World!";
    ft_memset(str1 + 7, '*', 5);
    printf("%s\n", str1);
    memset(str2 + 7, '*', 5);
    assert(strcmp(str1, str2) == 0);

    char numbers1[] = "12345";
    char numbers2[] = "12345";
    ft_memset(numbers1 + 1, '0', 3);
    printf("%s\n", numbers1);
    memset(numbers2 + 1, '0', 3);
    assert(memcmp(numbers1, numbers2, sizeof(numbers1)) == 0);
	return (0);
}