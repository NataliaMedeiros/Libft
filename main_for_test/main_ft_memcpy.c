#include <string.h>
#include <stdio.h>
#include "../libft/libft.h"

char *string_gen(int size);

void assert(int condition);

int main(void)
{
//test 0 - With string
	char	dst[] = "avocado";
	char	src[] = "is good";
    char	dst1[] = "avocado";
	char	src1[] = "is good";
    size_t     len;

    len = 6;
    ft_memcpy(dst, src, len);
    memcpy(dst1, src1, len);
    //printf("%s = %s\n", dst, dst1);
    assert(strcmp(dst, dst1) == 0);
//test 1 - With array of integer
	int array[] = {1, 2, 3, 4, 5};
	int source[] = {6, 7, 8, 9, 10};
	int array1[] = {1, 2, 3, 4, 5};
	int source1[] = {6, 7, 8, 9, 10};
    size_t     len1;

    len1 = 4 * sizeof(int);
    ft_memcpy(array, source, len1);
    memcpy(array1, source1, len1);
    for (size_t i = 0; i < (sizeof(array)/sizeof(int)); i++)
    {
        assert(array[i] == array1[i]);
        //printf("arr[%zu] = %d\n", i, array[i]);
    }
//test 2 - With special caracter
	char	d[] = "!@#$%^&*()_";
	char	s[] = "_)(*&^%$#@!)";
    char	d1[] =  "!@#$%^&*()_";
	char	s1[] = "_)(*&^%$#@!)";
    size_t     len2;

    len2 = 6;
    ft_memcpy(d, s, len2);
    memcpy(d1, s1, len2);
    //printf("%s = %s\n", d, d1);
    assert(strcmp(d, d1) == 0);
//test 3 - With len = 0
	char	t[] = "avocado";
	char	y[] = "is good";
    char	t1[] = "avocado";
	char	y1[] = "is good";
    size_t     len3;

    len3 = 0;
    ft_memcpy(t, y, len3);
    memcpy(t1, y1, len3);
    assert(strcmp(t, t1) == 0);
//test final
    printf("Test succed\n");
	return (0);
}