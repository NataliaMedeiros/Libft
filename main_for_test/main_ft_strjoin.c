/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ft_strjoin.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 08:23:57 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/01/26 21:58:24 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"

void	assert(int test_number, int condition);

int	main(void)
{
	char *s1 = "avocado";
	char *s2 = " is good!!";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
