#include <stdio.h>
#include "../libft/libft.h"

int	test_itoa(char *buffer, int n)
{
	sprintf(buffer, "%i", n);
}

int	main(void)
{
	printf("%s\n", ft_itoa(1994));
	printf("%s\n", ft_itoa(-1994));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	return (0);
}
