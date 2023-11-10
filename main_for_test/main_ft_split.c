/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:23:27 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/11/08 16:05:52 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"

void	assert(int test_number, int condition);

void	memory_assert(int test_number, int condition);

//void	test_split(int test_number, )

int	main(void)
{
	char *s1;

	s1 = "avocado is good!!";
	ft_split(s1, 'o');

	return (0);
}
