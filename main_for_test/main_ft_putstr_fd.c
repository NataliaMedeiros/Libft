/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ft_putstr_fd.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 08:23:24 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/01/26 21:23:39 by natalia       ########   odam.nl         */
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

int	compare_outputs(int test_number, char *string, int fd)
{
	freopen("output.txt", "w", stdout);
	printf("%s", string);
	freopen("my_output.txt", "w", stdout);
	ft_putstr_fd(string, fd);
	freopen("/dev/tty", "w", stdout);
	assert(test_number, (compare_files("output.txt", "my_output.txt")) == 1);
	return (0);
}

int	main(void)
{
	compare_outputs(0, "Abacate", STDOUT_FILENO);
	compare_outputs(1, "Hello World!!", STDOUT_FILENO);
	compare_outputs(2, "\n", STDOUT_FILENO);
	printf("\n");
	return (0);
}
