/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ft_isprint.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 08:22:16 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/01/26 21:46:41 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../libft/libft.h"

#define SET_COLOR_GREEN "\x1b[32m"
#define RESET_COLOR_GREEN "\x1b[0m"
#define SET_COLOR_RED "\x1b[31m"
#define RESET_COLOR_RED "\x1b[0m"

int	main(void)
{
	int	error;

	error = 0;
	int	res_origin_function;

	for (int c = 0; c <= 255; c++)
	{
		res_origin_function = isprint(c);
		if (res_origin_function > 0)
		{
			res_origin_function = 1;
		}
		if (ft_isprint(c) != res_origin_function)
		{
			printf("%s%d:[failed]%s", SET_COLOR_RED, c, RESET_COLOR_RED);
			error = 1;
		}
	}
	if (error == 0)
		printf("%s0: [OK]%s\n", SET_COLOR_GREEN, RESET_COLOR_GREEN);
	return (0);
}
