/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:50:32 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/11 17:55:04 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
library -> #include <ctype.h>
void bzero(void *s, size_t n);
description: The  bzero()  function  erases the data 
                in the n bytes of the memory starting 
                at the location pointed to by s, by 
                writing zeros (bytes containing '\0') 
                to that area.
*/

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *new_s = (unsigned char *)s;
    size_t i;

    i = 0;
    while (i < n)
    {
        new_s[i] = 0;
        i++;
    }
}
