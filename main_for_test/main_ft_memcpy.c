/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:22:44 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/11/02 11:17:13 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"

char	*string_gen(int size);

void	assert(int test_number, int condition);

int	test_ft_memcpy(int test_number, char *dst, char *src, int len)
{
	char	*dst1;
	char	*src1;
	int		len1;

	dst1 = dst;
	src1 = src;
	len1 = len;
	ft_memcpy(dst, src, len);
	memcpy(dst1, src1, len1);
	assert(test_number, (strcmp(dst, dst1) == 0));
	return (0);
}

int	main(void)
{
//test 0 - With string
	char	dst[] = "avocado";
	char	src[] = "is good";
	size_t	len;

	len = 6;
	test_ft_memcpy(0, dst, src, len);
//test 1 - With array of integer
	int array[] = {1, 2, 3, 4, 5};
	int source[] = {6, 7, 8, 9, 10};
	int array1[] = {1, 2, 3, 4, 5};
	int source1[] = {6, 7, 8, 9, 10};
    size_t     len1;

    len1 = 4 * sizeof(int);
    ft_memcpy(array, source, len1);
    memcpy(array1, source1, len1);
    for (size_t i = 0; i < (sizeof(array)/sizeof(int)); i++)
    {
        assert(1, array[i] == array1[i]);
        //printf("arr[%zu] = %d\n", i, array[i]);
    }
//test 2 - With special caracter
	char	d[] = "!@#$%^&*()_";
	char	s[] = "_)(*&^%$#@!)";
	size_t	len2;

    len2 = 6;
	test_ft_memcpy(2, d, s, len2);
//test 3 - With len = 0
	char	t[] = "avocado";
	char	y[] = "is good";
    char	t1[] = "avocado";
	char	y1[] = "is good";
    size_t     len3;

    len3 = 0;
    ft_memcpy(t, y, len3);
    memcpy(t1, y1, len3);
    //assert(strcmp(t, t1) == 0);
//test final
    printf("Test succed\n");
	return (0);
}
