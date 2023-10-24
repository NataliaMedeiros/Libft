/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:12:40 by natalia           #+#    #+#             */
/*   Updated: 2023/10/24 15:14:09 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
#include <string.h>
#include <stdint.h>
#include "../libft/libft.h"

void	assert(int condition);

int	main(void)
{
//test 0 - should return 7
	char	*c0;

	c0 = "avocado";
    assert(ft_strlen(c0) == strlen(c0));
    //printf("The length of the string '%s' is = '%zu\n'", c0, ft_strlen(c0));
//test 1 - should return 16
	char	*c1;

	c1 = "I love coffee!!!";
	assert(ft_strlen(c1) == strlen(c1));
    //printf("The length of the string '%s' is = '%zu'\n", c1, ft_strlen(c1));
//test 2 - should return 18
	char	*c2;

	c2 = "My name is Natalia";
	assert(ft_strlen(c2) == strlen(c2));
	//printf("The length of the string '%s' is = %zu\n", c2, ft_strlen(c2));
//test 3 - empty string, should return 0
	char	*c3;

	c3 = "";
	assert(ft_strlen(c3) == strlen(c3));
	//printf("The length of the string '%s' is = %zu\n", c3, ft_strlen(c3));
//test 4 - should stop at \0
	char	*c4;

	c4 = "Hello\0World";
	assert(ft_strlen(c4) == strlen(c4));
	//printf("The length of the string '%s' is = %zu\n", c4, ft_strlen(c4));
//test 5 - should return 11
	char	*c5;

	c5 = "Hello\nWorld";
	assert(ft_strlen(c5) == strlen(c5));
	//printf("The length of the string '%s' is = %zu\n", c5, ft_strlen(c5));
//test final
	printf("Test succes\n");
	return (0);
}
