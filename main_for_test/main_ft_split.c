#include <stdio.h>
#include "../libft/libft.h"

int	main(void)
{
	char *s1;
	char c;

	s1 = "avocado is good!!";
    c = 'o';
ft_split(s1, c);

	return (0);
}