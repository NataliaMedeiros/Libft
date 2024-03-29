/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ft_toupper.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 14:01:10 by natalia       #+#    #+#                 */
/*   Updated: 2024/01/26 22:03:45 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "../libft/libft.h"

void	assert(int test_number, int condition);

int	main(void)
{
	for(char c = 'a'; c <= 'z'; c++)
	{
		assert((c - 97), ft_toupper(c) == toupper(c));
	}
	for (char c = 'A'; c <= 'Z'; c++)
	{
		assert((c - 65 + 25), ft_toupper(c) == toupper(c));
	}
	printf("\n");
	return (0);
}
