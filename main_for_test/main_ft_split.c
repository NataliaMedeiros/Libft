/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:23:27 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/26 08:23:28 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"

int	main(void)
{
	char *s1;
	char c;

	s1 = "avocado is good!!";
    c = 'o';
ft_split(s1, c);

	return (0);
}