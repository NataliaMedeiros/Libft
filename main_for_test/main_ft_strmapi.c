/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ft_strmapi.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 15:11:39 by natalia       #+#    #+#                 */
/*   Updated: 2024/01/26 21:58:40 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

#include "../libft/libft.h"

void	assert(int test_number, int condition);

char	my_function(unsigned int index, char c)
{
	if (index % 2 == 0)
	{
		return ((char)ft_toupper(c));
	}
	else
	{
		return ((char)ft_tolower(c));
	}
}

int	main(void)
{
	char	*input;
	char	*result;

	input = "Hello, World!";
	result = ft_strmapi(input, my_function);
	printf("Result: %s\n", result);
	free(result);
	return (0);
}
