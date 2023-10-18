/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:02:50 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/18 17:57:24 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>

       void *malloc(size_t size);
       void free(void *ptr);
       void *calloc(size_t nmemb, size_t size);
       void *realloc(void *ptr, size_t size);
       void *reallocarray(void *ptr, size_t nmemb, size_t size);
*/
#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
       size_t total_size;
       void *new;
       
       total_size = nmemb * size;
       new = malloc(total_size);
       if (new == NULL)
       {
              return (NULL);
       }
       ft_memset(new, 0, total_size);
       return (new);
}
