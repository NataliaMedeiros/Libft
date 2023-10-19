#include <ctype.h>
#include "../libft/libft.h"

void assert (int condition);

int main (void)
{
	for (int c = 0; c <= 255; c++)
	{
		int res_origin_function;

		res_origin_function = isalnum(c);
		if(res_origin_function > 0)
		{
			res_origin_function = 1;
		}
		assert(ft_isalnum(c) == res_origin_function);
		// printf("for %c isalnum returns %d and %d\n", (char)c, ft_isalnum(c), res_origin_function);

	}
	printf("Test succed\n");
	return (0);
}