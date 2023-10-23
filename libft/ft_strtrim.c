/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:17:43 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/23 10:48:56 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Prototype:
        char *ft_strtrim(char const *s1, char const *set);
    Parameters:
        s1: The string to be trimmed.
        set: The reference set of characters to trim.
    Return value:
        The trimmed string.
        NULL if the allocation fails.
    External functs: 
        malloc
    Description:
         Allocates (with malloc(3)) and returns a copy of
        ’s1’ with the characters specified in ’set’ removed
        from the beginning and the end of the string.
*/
#include <stdlib.h> //library allowed because of malloc
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s1;
	int		start_i;
	int		end_i;
	int		new_len;

	start_i = 0;
	end_i = ft_strlen(s1) - 1;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (start_i < (int)ft_strlen(s1) && ft_strchr(set, s1[start_i]) != NULL)
	{
		start_i++;
	}
	while (end_i > start_i && ft_strrchr(set, s1[end_i]) != NULL)
	{
		end_i--;
	}
	new_len = end_i - start_i + 1;
	new_s1 = malloc(new_len);
	if (new_s1 == NULL)
		return (NULL);
	ft_strlcpy(new_s1, s1 + start_i, new_len);
	new_s1[new_len] = '\0';
	return (new_s1);
}
