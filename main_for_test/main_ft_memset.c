/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:23:02 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/26 08:23:02 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"

// #define ASSERT(condition) if(!(condition)) { printf("ATENTION: Test failed at file %s and line %d\n", __FILE__, __LINE__); \return (1);}

void assert (int condition);

int	main(void)
{
//test 0
	char	b[] = "I love coffee!!!";
    char    b2[] = "I love coffee!!!";

    ft_memset(b + 2, '.', 4);
    printf("%s\n", b);
    memset(b2 + 2, '.', 4);
    assert(strcmp(b, b2) == 0);
//test 1
    char    str1[] = "Hello, World!";
    char    str2[] = "Hello, World!";
    ft_memset(str1 + 7, '*', 5);
    //printf("%s\n", str1);
    memset(str2 + 7, '*', 5);
    assert(strcmp(str1, str2) == 0);
//test 2
    char numbers1[] = "12345";
    char numbers2[] = "12345";
    ft_memset(numbers1 + 1, '0', 3);
    //printf("%s\n", numbers1);
    memset(numbers2 + 1, '0', 3);
    assert(memcmp(numbers1, numbers2, sizeof(numbers1)) == 0);
//test 3
	int array1[] = {1, 2, 3, 4, 5};
	int array2[] = {1, 2, 3, 4, 5};
	ft_memset(array1, 0, sizeof(array1));
	//for (int i = 0; i < 5; i++) {printf("arr[%d] = %d\n", i, array1[i]);}
	memset(array2, 0, sizeof(array2));
	assert(memcmp(array1, array2, sizeof(array1)) == 0);
//test final
	printf("Test succed\n");
    return (0);
}
