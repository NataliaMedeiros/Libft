/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:22:12 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/26 10:01:54 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../libft/libft.h"

void	assert(int test_number, int condition);

int	main(void)
{
	int	res_origin_function;

	for (int c = 0; c <= 530; c++)
	{
		res_origin_function = isdigit(c);
		if (res_origin_function > 0)
		{
			res_origin_function = 1;
		}
		assert(c, ft_isdigit(c) == res_origin_function);
	}
	printf("Test succed\n");
	return (0);
}
