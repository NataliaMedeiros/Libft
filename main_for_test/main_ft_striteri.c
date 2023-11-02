/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:58:14 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/11/02 11:16:51 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	*my_function(unsigned int index, char c)
{
	if (index % 2 == 0)
	{
		c = (char)ft_toupper((int)c);
	}
	else
	{
		c = (char)ft_tolower((int)c);
	}
}

int	main(void)
{
	char	*input;

	input = "Hello, World!";
	ft_striteri(input, &my_function);
	printf("%s\n", input);
	return (0);
}
