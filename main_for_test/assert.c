#include <stdlib.h>
#include <stdio.h>

void assert (int condition)
{
    if(!(condition)) 
	{
        printf("FAILURE: Test failed, check function\n");
        exit(1);
    } 
}
