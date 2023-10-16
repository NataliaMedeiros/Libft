/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:01:03 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/11 16:43:18 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
library -> #include <ctype.h>
int isascii(int c);
description: checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
