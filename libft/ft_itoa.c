/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:43:15 by natalia           #+#    #+#             */
/*   Updated: 2023/10/25 18:25:19 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Prototype:
		char *ft_itoa(int n);
	Parameters:
		 n: the integer to convert.
	Return value
		The string representing the integer.
		NULL if the allocation fails.
	External functs:
		malloc
	Description:
		Allocates (with malloc(3)) and returns a string
		representing the integer received as an argument.
		Negative numbers must be handled.
*/
#include <stdlib.h>
#include <stdio.h>


int	intlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len = 1;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*new_n;
	int		len;

	if (n == -2147483648)
	{
		new_n = malloc(14 * sizeof(char));
		if (new_n == NULL)
			return (NULL);
		new_n = "-2147483648";
	}
	else
	{
		len = intlen(n);
		new_n = malloc((len + 1) * sizeof(char));
		if (new_n == NULL)
			return (NULL);
		if (n == 0)
		{
			new_n[0] = 0 + '0';
			return (new_n);
		}
		if (n < 0)
		{
			new_n[0] = '-';
			n *= -1;
		}
		new_n[len] = '\0';
		len--;
		while (n > 0)
		{
			new_n[len] = n % 10 + '0';
			n /= 10;
			len--;
		}
	}
	return (new_n);
}
