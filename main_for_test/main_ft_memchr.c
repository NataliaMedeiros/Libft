/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:22:27 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/11/02 11:17:17 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	test 0 - should find correspondence
	test 1 - should find correspondence
	test 2 - edge case len equal 0 (should return null)
	test 3 - Egde case len bigger than big
	test 4 - Egde case matching at the and and len = big string length
	test 5 - Egde case big contains multiple matches
	test 6 - Egde case Case sensitivity
	test 7 - Egde case Case sensitivity
*/
#include <stdio.h>
#include "../libft/libft.h"

char	*string_gen(int size);

void	assert(int test_number, int condition);

int	test_ft_menchr(int test_nb, char *s, char c, int n)
{
	assert(test_nb, ft_memchr(s, c, n) == memchr(s, c, n));
	//printf("%d = %s\n", test_nb, (char *)ft_memchr(s, c, n));
	return (0);
}

int	main(void)
{
	char	*s;

	s = "one cat, two cats, three cats, a lot of cats";
	test_ft_menchr(0, "avocado", 'd', 4);
	test_ft_menchr(1, "avocado", 'c', 4);
	test_ft_menchr(2, "avocado", 'c', 0);
	test_ft_menchr(3, "avocado", 'v', 50);
	test_ft_menchr(4, "avocado", 'e', ft_strlen("avocado"));
	test_ft_menchr(5, s, 'c', ft_strlen(s));
	test_ft_menchr(6, "Case SEnsitivity", 'S', 20);
	test_ft_menchr(7, "Case SEnsitivity", 's', 20);
	printf("Test succed\n");
	return (0);
}
