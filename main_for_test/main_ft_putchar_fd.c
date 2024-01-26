/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ft_putchar_fd.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 21:47:27 by natalia       #+#    #+#                 */
/*   Updated: 2024/01/26 21:53:44 by natalia       ########   odam.nl         */
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

int	compare_outputs(int test_number, char c, int fd)
{
	freopen("output.txt", "w", stdout);
	printf("%c", c);
	freopen("my_output.txt", "w", stdout);
	ft_putchar_fd(c, fd);
	freopen("/dev/tty", "w", stdout);
	assert(test_number, (compare_files("output.txt", "my_output.txt")) == 1);
	return (0);
}

int	main(void)
{
	compare_outputs(0, 'A', STDOUT_FILENO);
	compare_outputs(1, 'a', STDOUT_FILENO);
	compare_outputs(2, 'N', STDOUT_FILENO);
	compare_outputs(3, 'n', STDOUT_FILENO);
	compare_outputs(4, 'd', STDOUT_FILENO);
	compare_outputs(5, 'b', STDOUT_FILENO);
	compare_outputs(6, 'v', STDOUT_FILENO);
	compare_outputs(7, 'w', STDOUT_FILENO);
	compare_outputs(8, 'Y', STDOUT_FILENO);
	printf("\n");
	return (0);
}
