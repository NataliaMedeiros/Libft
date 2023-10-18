/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:21:02 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/18 18:43:46 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	library
		#include <ctype.h>
	Prototype
		int isdigit(int c);;
	description: 
		checks for an alphanumeric character;.
This function could be write on this way return (ft_isalpha(c) || ft_isdigit(c));
*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
