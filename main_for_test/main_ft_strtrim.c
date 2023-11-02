/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:04:15 by natalia           #+#    #+#             */
/*   Updated: 2023/11/02 11:16:25 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"

int	main(void)
{
	char	*s1;
	char	*set;

	s1 = "avoavavocadoavoav";
	set = "avo";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}
