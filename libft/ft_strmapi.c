/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:08:01 by natalia           #+#    #+#             */
/*   Updated: 2023/10/24 15:04:39 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Prototype:
		char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
	Parameters s:
		The string on which to iterate.
		f: The function to apply to each character.
	Return value:
		The string created from the successive applications
		of ’f’.
		Returns NULL if the allocation fails.
	External functs
		malloc
	Description:
		Applies the function ’f’ to each character of the
		string ’s’, and passing its index as first argument
		to create a new string (with malloc(3)) resulting
		from successive applications of ’f’.
*/

#include <stdlib.h> //library allowed because of malloc
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	int		i;

	i = 0;
	if (!s || !f)
	{
		return (NULL);
	}
	new_s = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (new_s == NULL)
	{
		return (NULL);
	}
	while (s[i])
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
