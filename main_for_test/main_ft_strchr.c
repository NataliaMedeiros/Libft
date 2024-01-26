/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ft_strchr.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 08:23:31 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/01/26 21:57:58 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft/libft.h"

void	assert(int test_number, int condition);

int	main(void)
{
	char	*s;
	char	ch;

	s = "abacate";
	ch = 'c';
	assert(0, ft_strchr(s, ch) == strchr(s, ch));

	s = "www.ns.nl";
	ch = '.';

	assert(1, ft_strchr(s, ch) == strchr(s, ch));

	s = "I love coffee!!!";
	ch = '.';

	assert(2, ft_strchr(s, ch) == strchr(s, ch));
	printf("\n");
	return (0);
}
