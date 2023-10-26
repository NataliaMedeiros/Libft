/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:03:28 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/26 08:20:27 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>

#include <string.h>

       int strncmp(const char *s1, const char *s2, size_t n);
• 0, if the s1 and s2 are equal;
• a negative value if s1 is less than s2;
• a positive value if s1 is greater than s2.

*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < (int)n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
