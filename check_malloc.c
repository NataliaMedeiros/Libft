#include <stdio.h>

int	check_malloc(char *buffer)
{
	if (buffer == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	return (0);
}
