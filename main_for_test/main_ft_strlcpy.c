/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:14:24 by natalia           #+#    #+#             */
/*   Updated: 2023/10/26 08:24:15 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include "../libft/libft.h"

void assert (int condition);

int	main(void)
{
	char	dst[] = "avocado";
	char	src[] = "is good";
    char	dst1[] = "avocado";
	char	src1[] = "is good";
    size_t     len;

    len = 5;
	ft_strlcpy(dst, src, len);
    assert(ft_strlcpy(dst, src, len) == strlcpy(dst1, src1, len));
	printf("%s\n", dst);
	printf("%zu\n", ft_strlcpy(dst, src, len));
	printf("%zu\n", strlcpy(dst1, src1, len));
	return (0);
}
