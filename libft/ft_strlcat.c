/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:01:25 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/06 18:10:06 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t size)
{
	size_t	i;
	int	n;
	int dst_len;

	i = 0;
	n = 0;
	dst_len = ft_strlen(dst);
	if (dst_len > (int)size)
	{
		return (dst_len);
	}
	while (dst[i] != '\0' && i < size)
	{
		i++;
	}
	while (src[n] != '\0' && i < size -1)
	{
		dst[i] = src[n];
		i++;
		n++;
	}
	dst[i] = '\0';
	return (i);
}

// size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t size)
// {
// 	int dst_len;
// 	int src_len;
// 	int	n;

// 	dst_len = ft_strlen(dst);
// 	src_len = ft_strlen(src);

// 	if (size < dst_len)
// 	{
// 		return ()
// 	}
// 	i = 0;
// 	n = 0;
// 	while (dst[i] != '\0' && i < dstsize)
// 	{
// 		i++;
// 	}
// 	while (src[n] != '\0' && i < dstsize -1)
// 	{
// 		dst[i] = src[n];
// 		i++;
// 		n++;
// 	}
// 	dst[i] = '\0';
// 	return (i);
// }