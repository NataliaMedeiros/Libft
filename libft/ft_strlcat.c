/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:01:25 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/25 12:11:13 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	len;

	i = 0;
	n = 0;
	len = ft_strlen(dst) + ft_strlen(src);
	if (size == 0 && ft_strlen(dst) > 0)
		return (0);
	if ((size_t)ft_strlen(dst) > size)
	{
		return (ft_strlen(dst) + size + 1);
	}
	while (dst[i] != '\0' && i < size)
	{
		dst++;
	}
	while (n < (size_t)ft_strlen(src) && n < size -1)
	{
		dst[i] = src[n];
		i++;
		n++;
	}
	dst[i] = '\0';
	return (len);
}
