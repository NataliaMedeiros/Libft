/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:03:09 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/23 08:56:56 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* void *memchr(const void *s, int c, size_t n);*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_s;

	i = 0;
	new_s = (unsigned char *)s;
	while (i < n)
	{
		if (new_s[i] == (unsigned char)c)
		{
			return (new_s + i);
		}
		i++;
	}
	return (NULL);
}
