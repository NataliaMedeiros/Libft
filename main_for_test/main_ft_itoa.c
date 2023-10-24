#include <stdio.h>
#include "../libft/libft.h"

void	assert(int condition);

int		check_malloc(char *buffer);

int	test_itoa(char *buffer, int n)
{
	sprintf(buffer, "%i", n);
	assert(strcmp(ft_itoa(n), buffer) == 0);
	return (0);
}

int	main(void)
{
	char	*buffer;

	buffer = (char *)malloc(12);
	check_malloc(buffer);
	test_itoa(buffer, 1994);
	test_itoa(buffer, -1994);
	test_itoa(buffer, -2147483648);
	test_itoa(buffer, 2147483647);
	printf("Test succed\n");
	free(buffer);
	return (0);
}
