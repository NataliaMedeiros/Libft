#include <stdio.h>
#include "../libft/libft.h"

int	main(void)
{
	char *s1 = "avocado";
	char *s2 = " is good!!";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}