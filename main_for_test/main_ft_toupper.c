/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:01:10 by natalia           #+#    #+#             */
/*   Updated: 2023/10/26 08:25:18 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/stdio.h>
#include <ctype.h>
#include "../libft/libft.h"

void	assert(int condition);

int	main(void)
{
	for(char c = 'a'; c <= 'z'; c++)
	{
		assert(ft_toupper(c) == toupper(c));
		// printf("%c turn into %c\n", c, ft_toupper(c));
	}
	for (char c = 'A'; c <= 'Z'; c++)
	{
		assert(ft_toupper(c) == toupper(c));
		// printf("%c turn into %c\n", c, ft_toupper(c));
	}
	printf("Test succed\n");
	return (0);
}
