#include <bsd/stdio.h>
#include <string.h>
#include "../libft/libft.h"
#include <stdlib.h>

void assert (int condition);

int main(void)
{
    int testsucess;

    testsucess = 0;
//test 1 - creating a int array
    int* intArray = (int*)ft_calloc(5, sizeof(int));
    if (intArray != NULL) {
        for (int i = 0; i < 5; i++) {
            if(intArray[i] == 0)
            {
                testsucess = 1;
            }
            else
            {
                testsucess = 0;
            }
            //printf("intArray[%d] = %d\n", i, intArray[i]);
        }
        free(intArray);
    } else {
        printf("Memory allocation failed.\n");
    }
//test 2 - creating a char array
    char* charArray = (char*)ft_calloc(8, sizeof(char));
    if (charArray != NULL) {
        for (int i = 0; i < 8; i++) {
            if(charArray[i] == 0)
            {
                testsucess = 1;
            }
            else
            {
                testsucess = 0;
            }
            //printf("charArray[%d] = '%c'\n", i, charArray[i]);
        }
        free(charArray);
    } else {
        printf("Memory allocation failed.\n");
    }
    if (testsucess == 1)
    {
        printf("Test succed\n");
    }
    return (0);
}