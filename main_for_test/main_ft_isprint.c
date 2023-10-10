#include <ctype.h>
#include "../libft/libft.h"

void assert (int condition);

int main (void)
{
	for (int c = 0; c <= 255; c++)
	{
        //printf("my for %d is %d and should be %d\n", c, ft_isprint(c), isprint(c));
		assert(ft_isprint(c) == isprint(c));
	}
	printf("Test succed\n");
	return (0);
}