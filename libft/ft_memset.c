/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:21:17 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/26 08:18:06 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*new_b;
	size_t			i;

	new_b = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		new_b[i] = c;
		i++;
	}
	return (b);
}
