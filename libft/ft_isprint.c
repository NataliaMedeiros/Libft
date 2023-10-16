/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:01:15 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/11 16:44:26 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
library -> #include <ctype.h>
int isprint(int c);
description: checks for any printable character including space.
*/

#include "libft.h"

int	ft_isprint(char c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
