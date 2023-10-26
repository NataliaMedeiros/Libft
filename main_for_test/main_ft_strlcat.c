/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:14:28 by natalia           #+#    #+#             */
/*   Updated: 2023/10/26 08:24:08 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include "../libft/libft.h"

/*
testa tamanho da STRING
testa tamanho MENOR STRING
testa tamanho MAIOR STRING
*/
void assert (int condition);

char *string_gen(int size);

int	main(void)
{
//test 0 - my function - size bigger than the sum of strings
	char	dst[] = "avocado";
	char	src[] = " is good";
    int     res_t0;

	res_t0 = ft_strlcat(dst, src, 17);
	//printf("%s\n", dst);
	//printf("%d\n", res_t0);
//test 1 - origin function - size bigger than the sum of strings
    char	dst1[] = "avocado";
	char	src1[] = " is good";
    int     res_t1;

	res_t1 = strlcat(dst1, src1, 17);
	//printf("%s\n", dst1);
	//printf("%d\n", res_t1);
//comparing test 0 and test 1
    assert(res_t0 == res_t1);

//test 2 - my function - size lower than one string
	char	dst2[] = "avocado";
	char	src2[] = " is good";
    int     res_t2;

	res_t2 = ft_strlcat(dst2, src2, 5);
	//printf("%s\n", dst2);
	//printf("%d\n", res_t2);
//test 3 - origin function - my function - size lower than one string
    char	dst3[] = "avocado";
	char	src3[] = " is good";
    int     res_t3;

	res_t3 = strlcat(dst3, src3, 5);
	//printf("%s\n", dst3);
	//printf("%d\n", res_t3);
//comparing test 2 and test 3
    assert(res_t2 == res_t3);

//test 4 - my function - one string empty and size less than the other
	char	dst4[] = "";
	char	src4[] = "avocado is good";
    int     res_t4;

	res_t4 = ft_strlcat(dst4, src4, 10);
	//printf("%s\n", dst4);
	//printf("%d\n", res_t4);
//test 5 - origin function - one string empty and size less than the other
    char	dst5[] = "";
	char	src5[] = "avocado is good";
    int     res_t5;

	res_t5 = strlcat(dst5, src5, 10);
	//printf("%s\n", dst5);
	//printf("%d\n", res_t5);
//comparing test 4 and test 5
    assert(res_t4 == res_t5);
//test 6 - my function - size zero
	char	dst6[] = "I love coffee and ";
	char	src6[] = "";
    int     res_t6;

	res_t6 = ft_strlcat(dst6, src6, 0);
	//printf("%s\n", dst6);
	//printf("%d\n", res_t6);
//test 7 - origin function - size zero
    char	dst7[] = "I love coffee and ";
	char	src7[] = "";
    int     res_t7;

	res_t7 = strlcat(dst7, src7, 0);
	//printf("%s\n", dst7);
	//printf("%d\n", res_t7);
//comparing test 6 and test 7
    assert(res_t6 == res_t7);
//test 8 - my function - size zero and dst empty
	char	dst8[] = "";
	char	src8[] = "I love coffee and ";
    int     res_t8;

	res_t8 = ft_strlcat(dst8, src8, 0);
	//printf("%s\n", dst8);
	//printf("%d\n", res_t8);
//test 9 - my function - size zero and dst empty
    char	dst9[] = "";
	char	src9[] = "I love coffee and ";
    int     res_t9;

	res_t9 = strlcat(dst9, src9, 0);
	//printf("%s\n", dst9);
	//printf("%d\n", res_t9);
//comparing test 8 and test 9
    assert(res_t8 == res_t9);
//final
	printf("Test succed\n");
	return (0);
}
