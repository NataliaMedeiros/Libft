/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ft_memcpy.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 08:22:44 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/01/26 21:30:35 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

char	*string_gen(int size);

void	assert(int test_number, int condition);

void	test_ft_memcpy(int test_number, void *dst, void *src, size_t len)
{
	void	*dst1;
	void	*src1;
	size_t	len_dst;

	dst1 = dst;
	src1 = src;
	len_dst = ft_strlen(dst1) + 1;
	ft_memcpy(dst, src, len);
	memcpy(dst1, src1, len);
	assert(test_number, (memcmp(dst, dst1, len_dst) == 0));
}

int	main(void)
{
	char	dst[] = "avocado";
	char	dst1[] = "!@#$%^&*()_";
	int array[] = {1, 2, 3, 4, 5};
	int source[] = {6, 7, 8, 9, 10};
	size_t	len1 = 4 * sizeof(int);

	test_ft_memcpy(0, dst, "is good", 6);
	test_ft_memcpy(1, dst1, "_)(*&^%$#@!)", 6);
	test_ft_memcpy(2, dst, "is good", 0);
	test_ft_memcpy(3, string_gen(5), string_gen(2), 5);
	test_ft_memcpy(4, string_gen(0), string_gen(5), 0);
	test_ft_memcpy(5, array, source, len1);
	test_ft_memcpy(6, string_gen(10), string_gen(5), 16);
	printf("\n");
	return (0);
}
