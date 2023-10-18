#include <bsd/string.h>
#include <stdio.h>
#include "../libft/libft.h"

/*
    Overlapping Source and Destination Ranges:
        Test cases where the source and destination memory regions significantly overlap.
        Test cases where the destination range is entirely within the source range.
        Test cases where the source and destination ranges are exactly the same.

    Null Pointers:
        Test the behavior when either the source or destination pointer is a null pointer.

    Empty or Zero-Length Copy:
        Test cases where the length (n) of the copy is zero.
        Test cases where either the source or destination is an empty buffer.

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
	char	dst[4];
	char	src[] = "is good";
    size_t     len;
	char	dst1[4];
	char	src1[] = "is good";
    size_t     len1;

    len = strlen(src);
    len1 = strlen(src1);
    ft_memmove(dst, src, len);
    memmove(dst1, src1, len1);
    printf("%s\n", dst);
    printf("%s\n", src);
    printf("%s\n", dst1);
    printf("%s\n", src1);
    printf("Test succed\n");
	return (0);
}