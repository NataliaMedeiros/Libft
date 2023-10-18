/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:21:17 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/18 18:21:18 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
library -> #include <string.h>
void *memset(void *s, int c, size_t n);
description: The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.
*/

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *new_b = (unsigned char *)b;
    size_t i;

    i = 0;
    while (i < len)
    {
        new_b[i] = c;
        i++;
    }
    return (b);
}