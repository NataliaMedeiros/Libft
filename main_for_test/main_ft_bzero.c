/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:14:25 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/11/08 13:19:49 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	assert(int test_number, int condition);

int	test_bzero_char(int test_number, void *t, int n)
{
	char	*ot;

	ot = (char *)t;
	ft_bzero(t, n);
	bzero(ot, n);
	assert(test_number, (strcmp(t, ot) == 0));
	return (0);
}

int	main(void)
{
	char	t0[10];
	char	t1[] = "I love coffee";
	char	t2[] = "";
	int		t3[] = {1, 2, 3, 4, 5};
	int		t4[] = {9, 8, 7, 6, 5};
	int		t5[10000];

	test_bzero_char(0, t0, sizeof(t0));
	test_bzero_char(1, t1, sizeof(t1));
	test_bzero_char(2, t2, sizeof(t2));
	test_bzero_char(3, t4, sizeof(t3));
	test_bzero_char(4, t4, sizeof(t4));
	test_bzero_char(5, t5, sizeof(t5));
	return (0);
}
