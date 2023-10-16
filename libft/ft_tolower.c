/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:03:43 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/11 18:17:42 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
include <ctype.h>
       int tolower(int c);
DESCRIPTION
       These functions convert lowercase letters to uppercase, and vice versa.
RETURN VALUE
       The value returned is that of the converted letter, or c if the conversion was not possible.
*/
#include "libft.h"

int ft_tolower(int c)
{
       if (c >= 'a' && c <='z')
       {
              c -=40;
       }
       if(c >= 'A' && c <= 'Z')
       {
              c += 40;
       }
       return (c);
}