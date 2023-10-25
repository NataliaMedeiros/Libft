/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:56:32 by natalia           #+#    #+#             */
/*   Updated: 2023/10/25 15:56:50 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	assert(int test_number, int condition)
{
	if (!(condition))
	{
		printf("%d -> Failure:Test failed, check function\n", test_number);
		exit(1);
	}
}
