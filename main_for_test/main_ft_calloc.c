/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:58:04 by natalia           #+#    #+#             */
/*   Updated: 2023/11/08 11:00:04 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"
#include <stdlib.h>

int	assert(int test_number, int condition);

int	memory_assert(int test_number, int condition);

int	test_calloc(int test_nb, void *array, size_t nmemb, size_t size)
{
	void	*test_size = malloc(nmemb * size);
	void	*new_array = ft_calloc(nmemb, size);

	assert(test_nb, (ft_memcmp(array, new_array, nmemb * size)));
	memory_assert(test_nb + 1, sizeof(new_array) == sizeof(test_size));
	free (new_array);
	free (test_size);
	return (0);
}

int	main(void)
{
	/* test 0 and 1 */ test_calloc(0, "0000", 2, 2);
	/* test 2 and 3 */ test_calloc(2, "0, 0, 0, 0, 0", 5, sizeof(int));
	/* test 4 and 5 */ test_calloc(4, "00000000", 8, sizeof(char));
	assert(6, (ft_calloc(SIZE_MAX, SIZE_MAX) == NULL));
	assert(7, (ft_calloc(INT32_MAX, INT32_MAX) == NULL));
	assert(8, (ft_calloc(INT32_MIN, INT32_MIN) == NULL));
	memory_assert(9, (sizeof(ft_calloc(0,0)) == sizeof(malloc(0))));
	memory_assert(10, (ft_calloc(-5, -5) == NULL));
	memory_assert(11, (ft_calloc(-5, 0) == NULL));
	memory_assert(12, (ft_calloc(5, -5) == NULL));
	memory_assert(13, (ft_calloc(-5, 5) == NULL));
	return (0);
}
