/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:23:57 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/11/02 11:16:41 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"

int	main(void)
{
	char *s1 = "avocado";
	char *s2 = " is good!!";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
