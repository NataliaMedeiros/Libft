/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:23:31 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/26 08:23:36 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/stdio.h>
#include <string.h>
#include "../libft/libft.h"

void assert (int condition);

int	main(void)
{
	char	*s = "abacate";
	char	ch = 'c';

    assert(ft_strchr(s, ch) == strchr(s, ch));
	printf("Succes '%s' is iqual = '%s'\n", ft_strchr(s, ch), strchr(s, ch));

    s = "www.ns.nl";
	ch = '.';

    assert(ft_strchr(s, ch) == strchr(s, ch));
	printf("Succes '%s' is iqual = '%s'\n", ft_strchr(s, ch), strchr(s, ch));

    s = "I love coffee!!!";
	ch = '.';

    assert(ft_strchr(s, ch) == strchr(s, ch));
	printf("Succes '%s' is iqual = '%s'\n", ft_strchr(s, ch), strchr(s, ch));
	printf("Test succed\n");
    return (0);
}
