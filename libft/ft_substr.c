/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:22:34 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/24 13:38:03 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Prototype
        char *ft_substr(char const *s, unsigned int start,
size_t len);
    Parameters
        s: The string from which to create the substring.
        start: The start index of the substring in the string ’s’.
        len: The maximum length of the substring.
    Return value
        The substring.
        NULL if the allocation fails.
    External functs.
        malloc
    Description
        Allocates (with malloc(3)) and returns a substring
        from the string ’s’.
        The substring begins at index ’start’ and is of
        maximum size ’len’.
*/

#include <stdlib.h> //library allowed because of malloc
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	substring = malloc(len + 1);
	i = 0;
	if (substring == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		substring[i] = s[start];
		start++;
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
