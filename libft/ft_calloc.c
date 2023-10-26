/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:02:50 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/26 09:20:02 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
       void *calloc(size_t nmemb, size_t size);
*/
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*new;

	total_size = nmemb * size;
	new = malloc(total_size);
	if (new == NULL)
	{
		return (NULL);
	}
	ft_memset(new, 0, total_size);
	return (new);
}
