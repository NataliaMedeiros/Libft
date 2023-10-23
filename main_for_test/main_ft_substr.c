/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:24:03 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/23 09:50:18 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include "../libft/libft.h"

int	main(void)
{
	char	*s;
	int		start;
	size_t	len;

	s = "avocado";
	start = 2;
	len = 5;
	printf("%s", ft_substr(s, start, len));
}
