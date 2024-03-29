/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ft_strrchr.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 14:04:45 by natalia       #+#    #+#                 */
/*   Updated: 2024/01/26 21:39:48 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft/libft.h"

void	assert(int condition);

int	main(void)
{
	char	*s = "abacate";
	char	ch = 'a';

	assert(ft_strrchr(s, ch) == strrchr(s, ch));
	//printf("Succes '%s' is iqual = '%s'\n", ft_strrchr(s, ch), strrchr(s, ch));

	s = "www.ns.nl";
	ch = '.';

	assert(ft_strrchr(s, ch) == strrchr(s, ch));
	//printf("Succes '%s' is iqual = '%s'\n", ft_strrchr(s, ch), strrchr(s, ch));

	s = "abacate";
	ch = 'b';

	assert(ft_strrchr(s, ch) == strrchr(s, ch));
	//printf("Succes '%s' is iqual = '%s'\n", ft_strrchr(s, ch), strrchr(s, ch));

	s = "abacate";
	ch = 'n';

	assert(ft_strrchr(s, ch) == strrchr(s, ch));
	//printf("Succes '%s' is iqual = '%s'\n", ft_strrchr(s, ch), strrchr(s, ch));
	return (0);
}
