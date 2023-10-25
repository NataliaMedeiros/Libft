/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:21:23 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/25 15:32:07 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>

       char *strdup(const char *s);

       char *strndup(const char *s, size_t n);
       char *strdupa(const char *s);
       char *strndupa(const char *s, size_t n);
       */
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_s;

	new_s = malloc(ft_strlen(s));
	ft_strlcpy(new_s, s, ft_strlen(s));
	return (new_s);
}
