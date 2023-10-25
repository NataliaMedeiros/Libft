#include <stdio.h>
#include <limits.h>
#include "../libft/libft.h"

void	assert(int test_number, int condition);

int		check_malloc(char *buffer);

int	test_itoa(int test_number, char *buffer, int n)
{
	sprintf(buffer, "%i", n);
	assert(test_number, (strcmp(ft_itoa(n), buffer) == 0));
	return (0);
}

int	main(void)
{
	char	*buffer;

	buffer = (char *)malloc(12);
	check_malloc(buffer);
	test_itoa(1, buffer, 1994);
	test_itoa(2, buffer, -1994);
	test_itoa(3, buffer, -2147483648);
	test_itoa(4, buffer, 2147483647);
	test_itoa(5, buffer, 0);
	test_itoa(6, buffer, 1000034);
	test_itoa(7, buffer, -10004);
	test_itoa(8, buffer, INT_MAX);
	test_itoa(9, buffer, INT_MIN);
	test_itoa(10, buffer, -623);
	test_itoa(11, buffer, -2147483647 -1);
	for (int i = 0; i <= 100 / 2; i++)
	{
		int rd = (int)random() - RAND_MAX / 2;
		test_itoa(6 + i, buffer, rd);
	}
	printf("Test succed\n");
	free(buffer);
	return (0);
}
