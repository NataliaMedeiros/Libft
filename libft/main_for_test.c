#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
    {
		printf("%d\n", ft_strlen("ana"));
        printf("original function returns = %ld", strlen("ana"));
    }
	else
		printf("Type a character");
	return (0);
}