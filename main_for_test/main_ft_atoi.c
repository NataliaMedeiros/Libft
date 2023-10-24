/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 08:28:06 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/24 16:24:42 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <bsd/stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft/libft.h"

void	assert(int condition);

int	main(void)
{
//test 0
	char	*t = "1";
	assert(ft_atoi(t) == atoi(t));
//test 1
	char	*t1 = "-2147483648";
	assert(ft_atoi(t1) == atoi(t1));
//test 2
	char	*t2 = "2147483647";
	assert(ft_atoi(t2) == atoi(t2));
//test 3
	char	*t3 = "-1994";
	assert(ft_atoi(t3) == atoi(t3));
//test 4
	char	*t4 = "1994";
	assert(ft_atoi(t4) == atoi(t4));
//test 5
	char	*t5 = "08/04/1944";
	assert(ft_atoi(t5) == atoi(t5));
//test 6
	char	*t6 = "";
	assert(ft_atoi(t6) == atoi(t6));
//test 7
	char	*t7 = "hbgxvvxdsua";
	assert(ft_atoi(t7) == atoi(t7));
//final result
	printf("Test succed\n");
}
