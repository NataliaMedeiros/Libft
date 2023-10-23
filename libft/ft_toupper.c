/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:03:47 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/23 09:03:59 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <ctype.h>

       int toupper(int c);
       DESCRIPTION
       These functions convert lowercase letters to uppercase,
       and vice versa.

       If  c is a lowercase letter, toupper() returns its 
       uppercase equivalent, if an uppercase representation 
       exists in the current locale. 
       RETURN VALUE
       The value returned is that of the converted letter, 
       or c if the conversion was not possible.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}