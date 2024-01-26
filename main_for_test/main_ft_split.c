/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ft_split.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 08:23:27 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/01/26 21:55:28 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"

void	assert(int test_number, int condition);

void	memory_assert(int test_number, int condition);

void	test_split(int test_number, char *s, char c, char *res, int i)
{
	char	**result;

	result = ft_split(s, c);
	assert(test_number, strcmp(result[i], res) == 0);
	memory_assert(test_number + 1, (ft_strlen(result[i]) == ft_strlen(res)));
}

int	main(void)
{
	char	*s0 = "avocado is good!!";
	char	*s1 = "  Codam  42  ";
	char	*s2 = 0;
	char	*s3 = "codam";
	char	*s4 = "--1-2--3---4----5-----42";
	char	**res;

	res = ft_split(s0, 'o');
	/* 0 and 1 */	test_split(0, s0, 'o', "av", 0);
	/* 2 and 3 */	test_split(2, s0, 'o', "cad", 1);
	/* 4 and 5 */	test_split(4, s0, 'o', " is g", 2);
	/* 6 and 7 */	test_split(6, s0, 'o', "d!!", 3);
	/* last word */	assert(8, (res[4] == 0));
	/* 9 and 10 */	test_split(9, s1, ' ', "Codam", 0);
	/* 11 and 12 */	test_split(11, s1, ' ', "42", 1);
	/*	null s */	assert(13, (ft_split(s2, 0) == NULL));
	/* 14 and 15 */	test_split(14, s3, ' ', "codam", 0);
	/* 16 and 17 */	test_split(16, s4, '-', "1", 0);
	/* 18 and 19 */	test_split(18, s4, '-', "2", 1);
	/* 20 and 21 */	test_split(20, s4, '-', "3", 2);
	/* 22 and 23 */	test_split(22, s4, '-', "4", 3);
	/* 24 and 25 */	test_split(24, s4, '-', "5", 4);
	/* 26 and 27 */	test_split(26, s4, '-', "42", 5);
	printf("\n");
	return (0);
}
