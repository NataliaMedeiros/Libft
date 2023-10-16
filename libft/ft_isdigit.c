/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:01:09 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/11 16:41:18 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
library -> #include <ctype.h>
int isdigit(int c);
description: checks for a digit (0 through 9).
*/

#include "libft.h"

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
		//return (1);
	//return (0);
}
