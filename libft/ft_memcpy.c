/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:03:17 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/18 15:32:24 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Library:
    #include <string.h>

void *memcpy(void *dest, const void *src, size_t n);

DESCRIPTION
    The memcpy() function copies n bytes from memory area src 
    to memory area dest.  The memory areas must not overlap.  
    Use memmove(3) if the memory areas do over‐lap.

RETURN VALUE
    The memcpy() function returns a pointer to dest.
*/
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
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
