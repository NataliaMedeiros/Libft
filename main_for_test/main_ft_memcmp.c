/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ft_memcmp.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 08:22:31 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/01/26 21:31:01 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

char	*string_gen(int size);

void	assert(int test_number, int condition);

int	test_memcmp(int test_number, char *s, char *c, int n)
{
	assert(test_number, ft_memcmp(s, c, n) == memcmp(s, c, n));
	return (0);
}

int	main(void)
{
	char	*s = "avocado";
	char 	s1[] = {-128, 0, 127, 0};
	char 	copy_s1[] = {-128, 0, 127, 0};
	char	s2[] = {0, 0, 128, 0};
	char	s3[] = {0, 0, 8, 0};

	test_memcmp(0, s, "avocado", 6);
	test_memcmp(1, s, "avo", 6);
	test_memcmp(2, s, "avocado", 0);
	test_memcmp(3, s, "avo", 50);
	test_memcmp(4, s, "Avocado", 6);
	test_memcmp(5, "AVOCADo", "AvOcAdO", 6);
	test_memcmp(6, "0", "avo", 6);
	test_memcmp(7, s1, copy_s1, 4);
	test_memcmp(8, s, s2, 0);
	test_memcmp(9, s, s2, 1);
	test_memcmp(10, s2, s, 1);
	test_memcmp(11, s2, s3, 4);
	printf("\n");
	return (0);
}
