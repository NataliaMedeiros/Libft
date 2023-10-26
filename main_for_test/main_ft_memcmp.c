/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:22:31 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/26 10:26:52 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	test 0 - should return zero
	test 1 - should find correspondence
	test 2 - edge case len equal 0 (should return null)
	test 3 - Egde case len bigger than big
	test 4 - Egde case Case sensitivity
	test 5 - Egde case Case sensitivity
	test 6 - First variable empty
	test 7 - Second variable empry
	test 8 - Both variable empty
*/

#include <bsd/string.h>
#include <stdio.h>
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
	test_memcmp(0, "avocado", "avocado", 6);
	test_memcmp(1, "avocado", "avo", 6);
	test_memcmp(2, "avocado", "avocado", 0);
	test_memcmp(3, "avocado", "avo", 50);
	test_memcmp(4, "Avocado", "Avocado", 6);
	test_memcmp(5, "AVOCADo", "AvOcAdO", 6);
	test_memcmp(6, "0", "avo", 6);




//final
    printf("Test succed\n");
    return (0);
}
