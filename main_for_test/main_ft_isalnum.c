/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:22:03 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/26 10:02:49 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../libft/libft.h"

void	assert(int test_number, int condition);

int	main(void)
{
	int	res_origin_function;

	for (int c = 0; c <= 255; c++)
	{
		res_origin_function = isalnum(c);
		if (res_origin_function > 0)
		{
			res_origin_function = 1;
		}
		assert(c, ft_isalnum(c) == res_origin_function);

	}
	printf("Test succed\n");
	return (0);
}
