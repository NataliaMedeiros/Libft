#include <bsd/string.h>
#include <stdio.h>
#include "../libft/libft.h"

char *string_gen(int size);

void assert(int condition);

int main(void)
{
	char	dst[] = "avocado";
	char	src[] = "is good";
    char	dst1[] = "avocado";
	char	src1[] = "is good";
    size_t     len;

    len = 6;
    ft_memcpy(dst, src, len);
    memcpy(dst1, src1, len);
    assert(strcmp(dst, dst1) == 0);
    printf("Test succed\n");
	return (0);
}