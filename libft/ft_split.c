/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:51:42 by natalia           #+#    #+#             */
/*   Updated: 2023/10/24 13:55:38 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Prototype:
        char **ft_split(char const *s, char c);
    Parameters:
        s: The string to be split.
        c: The delimiter character.
    Return value:
        The array of new strings resulting from the split.
        NULL if the allocation fails.
    External functs:
        malloc, free
    Description:
        Allocates (with malloc(3)) and returns an array
        of strings obtained by splitting ’s’ using the
        character ’c’ as a delimiter. The array must end
        with a NULL pointer.
*/
#include <stdlib.h> //library allowed because of malloc
#include "libft.h"
#include <stdio.h>

int	count_words(char const *s, char c)
{
	int		i;
	int		i_word;

	i = 0;
	i_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			i_word++;
		}
		i++;
	}
	return (i_word);
}

char	**ft_split(char const *s, char c)
{
	char	**new_word;
	char	*start;
	int		i;

	new_word = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (new_word == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s != c && *s != '\0')
				s++;
			new_word[i] = ft_substr(start, 0, s - start);
			printf("%s\n", new_word[i]);
			i++;
		}
		else
			s++;
	}
	new_word[i] = NULL;
	return (new_word);
}
