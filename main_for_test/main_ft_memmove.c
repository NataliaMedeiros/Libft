/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:22:53 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/26 08:22:53 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include "../libft/libft.h"

char *string_gen(int size);

void assert(int condition);

int main(void)
{
//test 0 - Destination range is entirely within the source range.
	char	my_dest0[10];
	char	src0[] = "is good, really good";
    size_t     len0;
	char	dest0[7];

    len0 = 7;
    ft_memmove(my_dest0, src0, len0);
    memmove(dest0, src0, len0);
    //printf("%s\n", my_dest0);
    //printf("%s\n", dest0);
	assert(memcmp(my_dest0, dest0, len0) == 0);
//test 1 - len = 0
	char	my_dest1[7];
	char	src1[] = "is good";
    size_t     len1;
	char	dest1[7];

    len1 = 0;
    ft_memmove(my_dest1, src1, len1);
    memmove(dest1, src1, len1);
    //printf("%s\n", my_dest1);
    //printf("%s\n", dest1);
	assert(memcmp(my_dest1, dest1, len1) == 0);
//test 2 - src empty
	char	my_dest2[7];
	char	src2[] = "";
    size_t     len2;
	char	dest2[7];

    len2 = 5;
    ft_memmove(my_dest2, src2, len2);
    memmove(dest2, src2, len2);
    //printf("%s\n", my_dest2);
    //printf("%s\n", dest2);
	assert(memcmp(my_dest2, dest2, len2) == 0);
//test 3 - large source
	char	my_dest3[60];
	char	src3[] = "a123456789b123456789c123456789d123456789e123456789f123456789g123456789h";
	char	dest3[60];
	size_t len3;

    len3 = 59;
    ft_memmove(my_dest3, src3, len3);
    memmove(dest3, src3, len3);
    //printf("My: %s\n", my_dest3);
    //printf("Default: %s\n", dest3);
	assert(memcmp(my_dest3, dest3, len3) == 0);
//test 4 - with integer
	int my_array[15];
	int array[15];
	int source[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int len4;

	len4 = 8 * sizeof(int);
	ft_memmove(my_array, source, len4);
	memmove(array, source, len4);
	for (size_t i = 0; i < len4/sizeof(int); i++)
    {
        assert(my_array[i] == array[i]);
        //printf("arr[%zu] = %d\n", i, my_array[i]);
    }
//Adtional test
	char csrc[100] = "Geeksfor";
	memmove(csrc+5, csrc, strlen(csrc)+1);
	//printf("%s\n", csrc);
//Final
    printf("Test succed\n");
	return (0);
}
