/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:04:15 by natalia           #+#    #+#             */
/*   Updated: 2023/10/26 08:24:58 by nmedeiro         ###   ########.fr       */
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
