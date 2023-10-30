/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:17:43 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/30 10:27:39 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	look_for_set(char c, char const *set)
{
	int	i;
	int	find_set;

	i = 0;
	find_set = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			find_set = 1;
		i++;
	}
	i = 0;
	if (find_set == 1)
	{
		while (set[i] != '\0')
		{
			if (c == ' ' && set[i - 1] != c)
				return (1);
			if (set[i] == c)
				return (1);
			i++;
		}
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s1;
	int		start;
	int		end;
	int		new_len;

	start = 0;
	end = ft_strlen(s1) -1;
	while (s1[start] != '\0' && look_for_set(s1[start], set) == 1)
		start++;
	while (end > start && look_for_set(s1[end], set) == 1)
		end--;
	new_len = end - start + 2;
	new_s1 = (char *)malloc(sizeof(char) * new_len);
	if (new_s1 == NULL)
		return (NULL);
	ft_strlcpy(new_s1, s1 + start, new_len);
	return (new_s1);
}
