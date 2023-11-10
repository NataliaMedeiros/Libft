/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:23:02 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/11/08 15:45:25 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #define ASSERT(condition) if(!(condition)) {
	printf("ATENTION: Test failed at file %s and line %d\n", __FILE__, __LINE__);
	return (1);}
*/

#include "../libft/libft.h"

void	assert(int test_number, int condition);

int	test_ft_memset(int test_number, void *b, int c, size_t n)
{
	char	*b1;
	size_t	len_b;

	b1 = b;
	len_b = sizeof(b);
	ft_memset(b, c, n);
	memset(b1, c, n);
	assert(test_number, memcmp(b, b1, len_b) == 0);
	return (0);
}

int	main(void)
{
	char	b[] = "I love coffee!!!";
	char    str[] = "Hello, World!";
	char numbers1[] = "12345";
	int array1[] = {1, 2, 3, 4, 5};

	test_ft_memset(0, b + 2, '.', 4);
	test_ft_memset(1, str + 7, '*', 5);
	test_ft_memset(2, numbers1 + 1, '0', 3);
	test_ft_memset(3, array1, 0, sizeof(array1));
    return (0);
}
