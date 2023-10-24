/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:02:40 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/24 13:50:28 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
       Library:
              include <stdlib.h>
       Definition:
              int atoi(const char *nptr);

the * 10 makes the number go one space to the right, example,
if nptr was 1994 and initial number was 0 this line will do:
0 * 10 + 1 and then 1 * 10 + 9 and then 19 * 10 + 9 and then
199 *10 + 4 and the number will return 1994
*/
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	number;
	int	positive_or_negative;

	i = 0;
	number = 0;
	positive_or_negative = 1;
	if (nptr[i] == '-')
	{
		positive_or_negative = -1;
		i++;
	}
	while (nptr[i] != '\0')
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
			number = number * 10 + (nptr[i] - '0');
		else
			return (number);
		i++;
	}
	number *= positive_or_negative;
	return (number);
}
