/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:03:21 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/18 17:30:35 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Library:
    #include <string.h>

void *memmove(void *dest, const void *src, size_t n);

DESCRIPTION
    The  memmove()  function copies n bytes from memory area 
    src to memory area dest.  The memory areas may overlap: 
    copying takes place as though the bytes in srcare first 
    copied into a temporary array that does not overlap src 
    or dest, and the bytes are then copied from the temporary 
    array to dest.

RETURN VALUE
    The memmove() function returns a pointer to dest.*/
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t	i;
    char *new_dest;
    const char *new_src;

	i = 0;
    new_dest = (char *)dest;
    new_src = (const char *)src;
	while (i < n)
	{
		new_dest[i] = new_src[i];
		i++;
	}
	return (dest);
}