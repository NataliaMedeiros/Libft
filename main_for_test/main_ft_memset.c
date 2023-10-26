/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:23:02 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/26 15:26:19 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #define ASSERT(condition) if(!(condition)) { 
	printf("ATENTION: Test failed at file %s and line %d\n", __FILE__, __LINE__);
	return (1);}
*/

#include <bsd/stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"

void	assert(int test_number, int condition);

int	test_ft_memset(int test_number, char *b, int c, size_t n)
{
	char	*b1;

	b1 = b;
	ft_memset(b, c, n);
	memset(b1, c, n);
	assert(test_number, strcmp(b, b1) == 0);
	return (0);
}

int	main(void)
{
	char	b[] = "I love coffee!!!";
	char    str[] = "Hello, World!";
	char numbers1[] = "12345";

	test_ft_memset(0, b + 2, '.', 4);
	test_ft_memset(1, str + 7, '*', 5);
	test_ft_memset(2, numbers1 + 1, '0', 3);
		
	int array1[] = {1, 2, 3, 4, 5};
	int array2[] = {1, 2, 3, 4, 5};
	ft_memset(array1, 0, sizeof(array1));
	memset(array2, 0, sizeof(array2));
	assert(3, memcmp(array1, array2, sizeof(array1)) == 0);
	printf("Test succed\n");
    return (0);
}
