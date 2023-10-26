/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:23:44 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/26 08:23:45 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/stdio.h>
#include <string.h>
#include "../libft/libft.h"

void assert (int condition);

int main(void)
{
    printf("%s", ft_strdup("avocado"));
    printf("%s", strdup("avocado"));
    return (0);
}
