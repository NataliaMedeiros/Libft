#include <ctype.h>
#include "../libft/libft.h"

void assert (int condition);

int main (void)
{
	for (int c = 0; c <= 255; c++)
	{
		assert(ft_isdigit(c) == isdigit(c));
	}
	printf("Test succed\n");
	return (0);
}