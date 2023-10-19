#include <string.h>
#include <stdio.h>
#include "../libft/libft.h"

/*
    Null Pointers:
        Test the behavior when either the source or destination pointer is a null pointer.

    Empty or Zero-Length Copy:
        Test cases where either the source or destination is an empty 
		buffer.

    Data Type Variations:
        Test different data types (e.g., characters, integers, structures) for source and destination.

    Large Copy Sizes:
        Test cases with large n values, ensuring that memory allocation and copying work as expected.

    Buffer Bounds:
        Test cases where dest or src is located at the beginning or end of allocated memory, checking if memmove handles boundaries correctly.

    Performance Testing:
        Test memmove with very large data sets to ensure it performs efficiently.

    Usage with Complex Data Structures:
        Test memmove with complex data structures like arrays of structures or nested structures.

    Alignment:
        Test cases where the source and destination memory regions have different alignment requirements.

    Corner Cases:
        Special scenarios such as copying data across different memory segments (e.g., heap and stack) or memory protection boundaries.
*/
char *string_gen(int size);

void assert(int condition);

int main(void)
{
//test 0 - Destination range is entirely within the source range.
	char	my_dest0[7];
	char	src0[] = "is good";
    size_t     len0;
	char	dst0[7];

    len0 = 7;
    ft_memmove(my_dest0, src0, len0);
	dst[len0] = '\0';
    memmove(dst0, src0, len0);
	dst1[len] = '\0';
    //printf("%s\n", dst);
    //printf("%s\n", dst1);
	assert(memcmp(dst, dst1, len) == 0);
//test 1 - len = 0
	char	my_d[7];
	char	source[] = "is good";
    size_t     len1;
	char	d[7];

    len1 = 0;
    ft_memmove(my_d, source, len1);
    memmove(d, source, len1);
    //printf("%s\n", my_d);
    //printf("%s\n", d);
	assert(memcmp(dst, dst1, len) == 0);
    printf("Test succed\n");
	return (0);
}