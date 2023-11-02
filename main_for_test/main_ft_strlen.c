/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:12:40 by natalia           #+#    #+#             */
/*   Updated: 2023/11/02 11:16:34 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	test 0 - should return 7
	test 1 - should return 16
	test 2 - should return 18
	test 3 - empty string, should return 0
	test 4 - should stop at \0
	test 5 - should return 11


*/

#include <stdint.h>
#include <stdio.h>
#include "../libft/libft.h"

void	assert(int test_number, int condition);

int	test_ft_strlen(int test_number, char *s)
{
	assert(test_number, (ft_strlen(s) == strlen(s)));
	return (0);
}

int	main(void)
{
	test_ft_strlen(0, "avocado");
	test_ft_strlen(1, "I love coffee!!!");
	test_ft_strlen(2, "My name is Natalia");
	test_ft_strlen(3, "");
	test_ft_strlen(4, "Hello\0World");
	test_ft_strlen(5, "Hello\nWorld");
	printf("Test succes\n");
	return (0);
}
