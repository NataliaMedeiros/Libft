/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:05:01 by natalia           #+#    #+#             */
/*   Updated: 2023/11/02 11:16:29 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft/libft.h"

char	*string_gen(int size);

void	assert(int condition);

int	main(void)
{
//test 0 - should find correspondence
	char *b0 = "avocado";
	char *l0 = "ca";
	size_t len0 = 6;

	assert(ft_strnstr(b0, l0, len0) == strnstr(b0, l0, len0));
	// printf("test 0 = %s\n", ft_strnstr(b0, l0, len0));
//test 1 - should return null
	len0 = 4;
	assert(ft_strnstr(b0, l0, len0) == strnstr(b0, l0, len0));
	// printf("test 1 = %s \n", ft_strnstr(b0, l0, len0));
//test 2 - edge case len equal 0 (should return null)
	len0 = 0;
	assert(ft_strnstr(b0, l0, len0) == strnstr(b0, l0, len0));
	// printf("test 2 = %s \n", ft_strnstr(b0, l0, len0));
//test 3 - edge case empty big string (should return null)
	b0 = "";
	len0 = 6;
	assert(ft_strnstr(b0, l0, len0) == strnstr(b0, l0, len0));
	// printf("test 3 = %s \n", ft_strnstr(b0, l0, len0));
//test 4 - Egde case empty little string (should retur b0)
	b0 = "I love coffee!";
	l0 = "";
	len0 = 6;
	assert(ft_strnstr(b0, l0, len0) == strnstr(b0, l0, len0));
	// printf("test 4 = %s \n", ft_strnstr(b0, l0, 4));
//test 5 - Egde case len bigger than big
    l0 = "ve";
    len0 = 50;
    assert(ft_strnstr(b0, l0, len0) == strnstr(b0, l0, len0));
    // printf("test 5 = %s \n", ft_strnstr(b0, l0, len0));
//test 6 - Egde case matching at the and and len = big string length
    l0 = "e!";
    len0 = ft_strlen(b0);
    assert(ft_strnstr(b0, l0, len0) == strnstr(b0, l0, len0));
    // printf("test 6 = %s \n", ft_strnstr(b0, l0, len0));
//test 7 - Egde case little is longer than big (should return null)
    l0 = "I love coffee soo much!!!";
    len0 = ft_strlen(l0);
    assert(ft_strnstr(b0, l0, len0) == strnstr(b0, l0, len0));
    // printf("test 7 = %s \n", ft_strnstr(b0, l0, len0));
//test 8 - Egde case little and big are empty
    b0 = "";
    l0 = "";
    len0 = 4;
    assert(ft_strnstr(b0, l0, len0) == strnstr(b0, l0, len0));
    // printf("test 8 = %s \n", ft_strnstr(b0, l0, len0));
//test 9 - Egde case big contains multiple matches
    b0 = "one cat, two cats, three cats, a lot of cats";
    l0 = "cat";
    len0 = ft_strlen(b0);
    assert(ft_strnstr(b0, l0, len0) == strnstr(b0, l0, len0));
    // printf("test 9 = %s \n", ft_strnstr(b0, l0, len0));
//test 10 - Egde case Non-ASCII characters
    b0 = "¡¢£§ª";
    l0 = "£";
    len0 = 5;
    assert(ft_strnstr(b0, l0, len0) == strnstr(b0, l0, len0));
    // printf("test 10 = %s \n", ft_strnstr(b0, l0, len0));
//test 11 - Egde case Case sensitivity
    b0 = "Case SEnsitivity";
    l0 = "SEns";
    len0 = 20;
    assert(ft_strnstr(b0, l0, len0) == strnstr(b0, l0, len0));
    // printf("test 11 = %s \n", ft_strnstr(b0, l0, len0));
//test 12 - Egde case Case sensitivity
    b0 = "Case SEnsitivity";
    l0 = "sens";
    len0 = 20;
    assert(ft_strnstr(b0, l0, len0) == strnstr(b0, l0, len0));
    // printf("test 11 = %s \n", ft_strnstr(b0, l0, len0));
//final
    printf("Test succed\n");
    return (0);
}
