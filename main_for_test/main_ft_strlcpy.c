/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ft_strlcpy.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 15:14:24 by natalia       #+#    #+#                 */
/*   Updated: 2024/01/26 21:28:30 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"

void	assert(int test_number, int condition);

int	main(void)
{
	char	dst[] = "avocado";
	char	src[] = "is good";
	char	dst1[] = "avocado";
	char	src1[] = "is good";
	size_t	len;

	len = 5;
	assert(0, (ft_strlcpy(dst, src, len) == strlcpy(dst1, src1, len)));
	char	dst2[] = "Hello";
	char	src2[] = "World!!";
	char	dst3[] = "Hello";
	char	src3[] = "World!!";

	len = 3;
	assert(1, (ft_strlcpy(dst2, src2, len) == strlcpy(dst3, src3, len)));
	printf("\n");
	return (0);
}
