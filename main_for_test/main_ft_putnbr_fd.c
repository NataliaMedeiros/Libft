/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ft_putnbr_fd.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 08:23:14 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/01/26 21:36:16 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../libft/libft.h"

void	assert(int test_number, int condition);

int	compare_files(const char *file1, const char *file2)
{
	FILE	*fd1;
	FILE	*fd2;
	int		result;
	int		c1;
	int		c2;

	fd1 = fopen(file1, "r");
	fd2 = fopen(file2, "r");
	c1 = fgetc(fd1);
	c2 = fgetc(fd2);
	result = 1;
	while (c1 != EOF && c2 != EOF)
	{
		if (c1 != c2)
		{
			result = 0;
			break ;
		}
		c1 = fgetc(fd1);
		c2 = fgetc(fd2);
	}
	return (result);
}

int	compare_outputs(int test_number, int string, int fd)
{
	freopen("output.txt", "w", stdout);
	printf("%d", string);
	freopen("my_output.txt", "w", stdout);
	ft_putnbr_fd(string, fd);
	freopen("/dev/tty", "w", stdout);
	assert(test_number, (compare_files("output.txt", "my_output.txt")) == 1);
	return (0);
}
int	main(void)
{
	compare_outputs(0, -2147483648, 1);
	compare_outputs(1, -2, 1);
	compare_outputs(2, 0, 1);
	compare_outputs(3, 2147483647, 1);
	compare_outputs(4, 1994, 1);
	compare_outputs(5, 1000000, 1);
	printf("\n");
	return (0);
}
