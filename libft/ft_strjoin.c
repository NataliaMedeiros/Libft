/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:27:10 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/23 09:49:38 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Prototype:
        char *ft_strjoin(char const *s1, char const *s2);
    Parameters:
		s1: The prefix string.
		s2: The suffix string.
	Return value:
		The new string.
		NULL if the allocation fails.
	External functs:
		malloc
	Description:
		Allocates (with malloc(3)) and returns a new
		string, which is the result of the concatenation
		of ’s1’ and ’s2.
*/
#include <stdlib.h> //library allowed because of malloc
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen (s2) + 1;
	s = (char *)malloc(len);
	if (s == NULL)
	{
		return (NULL);
	}
	ft_strlcat(s, s1, len);
	ft_strlcat(s, s2, len);
	return (s);
}
