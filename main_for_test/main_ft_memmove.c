/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:22:53 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/11/08 15:38:43 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	assert(int test_number, int condition);

void	test_ft_memmove(int test_number, void *dest, void *src, size_t len)
{
	void	*dest1;

	dest1 = dest;
	ft_memmove(dest, src, len);
	memmove(dest1, src, len);
	assert(test_number, memcmp(dest, dest1, len) == 0);
}

int	main(void)
{
//test 0 - Destination range is entirely within the source range.
	char	dest0[10];
	char	dest1[7];
	char	dest2[60];
	char	src[] = "a123456789b123456789c123456789d123456789e123456789f123456789g123456789h";
	int my_array[15];
	int source[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int len4 = 8 * sizeof(int);

	test_ft_memmove(0,dest0, "is good, really good", 7);
	test_ft_memmove(1,dest1, "is good", 0);
	test_ft_memmove(2, dest1, "", 5);
	test_ft_memmove(3, dest2, src, 59);
	test_ft_memmove(4, my_array, source, len4);
	return (0);
}
