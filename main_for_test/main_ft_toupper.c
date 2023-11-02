/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:01:10 by natalia           #+#    #+#             */
/*   Updated: 2023/11/02 11:16:16 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
