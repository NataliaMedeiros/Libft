/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:03:38 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/26 08:20:30 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*char *
     strnstr(const char *big, const char *little, size_t len);
*/
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (big[i] == '\0' || little[i] == '\0')
	{
		return ((char *)&big[i]);
	}
	while (big[i] != '\0' && i < len)
	{
		n = 0;
		while (little[n] != '\0' && big[i + n] == little[n] && i + n < len)
		{
			n++;
		}
		if (little[n] == '\0')
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
