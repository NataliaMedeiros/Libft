/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:01:32 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/11 16:46:11 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
library -> #include <string.h>
size_t strlen(const char *s);
description: calculate the length of a string, excluding the terminating null byte ('\0')
*/

#include <stdio.h>
#include "libft.h"

int	ft_strlen(const char *c)
{
	int	len;

	len = 0;
	while (c[len] != '\0')
	{
		len++;
	}
	return (len);
}
