/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:22:22 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/11/08 14:32:12 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
for more checks include this code on main, after test 14
	for (int i = 0; i <= 100 / 2; i++)
	{
		int rd = (int)random() - RAND_MAX / 2;
		test_itoa(6 + i, buffer, rd);
	}
*/
#include "../libft/libft.h"

void	assert(int test_number, int condition);

void	memory_assert(int test_number, int condition);

int	test_itoa(int test_number, char *buffer, int n)
{
	char	*new_n;

	new_n = ft_itoa(n);
	sprintf(buffer, "%i", n);
	assert(test_number, (strcmp(new_n, buffer) == 0));
	memory_assert(test_number, (ft_strlen(buffer)) == ft_strlen(new_n));
	free(new_n);
	return (0);
}

int	main(void)
{
	char	*buffer;

	buffer = malloc(12);
	if (buffer == NULL)
	{
		printf("Error: check buffer memory alocation");
		return (1);
	}
	test_itoa(1, buffer, 1994);
	test_itoa(2, buffer, -1994);
	test_itoa(3, buffer, -2147483648);
	test_itoa(4, buffer, 2147483647);
	test_itoa(5, buffer, 0);
	test_itoa(6, buffer, 1000034);
	test_itoa(7, buffer, -10004);
	test_itoa(8, buffer, INT_MAX);
	test_itoa(9, buffer, INT_MIN);
	test_itoa(10, buffer, -623);
	test_itoa(11, buffer, -2147483647 -1);
	test_itoa(12, buffer, 1);
	test_itoa(13, buffer, -1);
	test_itoa(14, buffer, 42);
	free(buffer);
	return (0);
}
