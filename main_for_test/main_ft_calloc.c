/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:58:04 by natalia           #+#    #+#             */
/*   Updated: 2023/11/02 11:17:30 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"
#include <stdlib.h>

void	assert(int condition);

int main(void)
{
	int	testsucess;

	testsucess = 0;
//test 1 - creating a int array
	int	*int_array;

	int_array = (int*) ft_calloc(5, sizeof ( int));
	if (int_array != NULL)
	{
		for (int i = 0; i < 5; i++)
		{
			if (int_array[i] == 0)
			{
				testsucess = 1;
			}
			else
			{
				testsucess = 0;
			}
			//printf("int_array[%d] = %d\n", i, intArray[i]);
		}
		free(int_array);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
//test 2 - creating a char array
	char* charArray = (char*)ft_calloc(8, sizeof(char));
	if (charArray != NULL)
	{
		for (int i = 0; i < 8; i++)
		{
			if(charArray[i] == 0)
			{
				testsucess = 1;
			}
			else
			{
				testsucess = 0;
			}
			//printf("charArray[%d] = '%c'\n", i, charArray[i]);
		}
		free(charArray);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	if (testsucess == 1)
	{
		printf("Test succed\n");
	}
	return (0);
}
