/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:22:09 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/26 10:04:38 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../libft/libft.h"

void	assert(int test_number, int condition);

int	main(void)
{
	for (int c = 0; c <= 255; c++)
	{
		assert(c, ft_isascii(c) == isascii(c));
	}
	printf("Test succed\n");
	return (0);
}