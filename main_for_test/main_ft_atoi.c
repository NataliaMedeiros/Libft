/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 08:28:06 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/11/10 15:54:07 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	assert(int test_number, int condition);

int	check_malloc(char *buffer);

int	test_atoi(int test_number, char *t)
{
	assert(test_number, (ft_atoi(t) == atoi(t)));
	return (0);
}

int	main(void)
{
	test_atoi(1, "1");
	test_atoi(2, "-2147483648");
	test_atoi(3, "2147483647");
	test_atoi(4, "-1994");
	test_atoi(5, "1994");
	test_atoi(6, "08/04/1944");
	test_atoi(7, "");
	test_atoi(8, "hbgxvvxdsua");
	test_atoi(9, " \t\v\n\r\f123");
	test_atoi(10, "0");
	test_atoi(11, "-1000043");
	test_atoi(12, "+0000000000000000000000000000000000000000000000000000123");
	test_atoi(13, "    123");
	test_atoi(14, "--123");
	test_atoi(15, "-+123");
	test_atoi(16, "+-123");
	test_atoi(17, "++123");
	test_atoi(18, "- 123");
	test_atoi(19, "+ 123");
	test_atoi(20, "+\n123");
	test_atoi(21, "1209");
	test_atoi(22, "12/3");
	test_atoi(23, "12;3");
	test_atoi(24, "---");
	test_atoi(25, "-123THERE IS A NYANCAT UNDER YOUR BED");
}
