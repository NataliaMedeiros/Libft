/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ft_strtrim.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 14:04:15 by natalia       #+#    #+#                 */
/*   Updated: 2024/01/26 21:58:55 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"

void	assert(int test_number, int condition);

int	main(void)
{
	char	*s1;
	char	*set;

	s1 = "avoavavocadoavoav";
	set = "avo";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}
