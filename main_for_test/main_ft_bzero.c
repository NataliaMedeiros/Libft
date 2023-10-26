/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:14:25 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/26 08:14:26 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "../libft/libft.h"

void	assert(int test_number, int condition);

int main(void)
{
//test 0
    char t[10];
    char ot[10];
    int n = 10;
    ft_bzero(t, n);
    bzero(ot, n);
    assert(0, (strcmp(t, ot) == 0));
//test 1
    char t1[] = "I love coffee";
    char ot1[] = "I love coffee";
    int n1 = sizeof(t1);
    ft_bzero(t1, n1);
    bzero(ot1, sizeof(ot1));
    assert(1, (strcmp(t1, ot1) == 0));
//test 2
    char t2[] = "";
    char ot2[] = "";
    int n2 = sizeof(t2);
    ft_bzero(t2, n2);
    bzero(ot2, sizeof(ot2));
    assert(2, (strcmp(t2, ot2) == 0));
//test 3
    int t3[] = {1, 2, 3, 4, 5};
    int ot3[] = {1, 2, 3, 4, 5};
    int n3 = sizeof(t3);
    ft_bzero(t3, n3);
    bzero(ot3, sizeof(ot3));
    for(int i = 0; i < n3/4; i++)
    {
        //printf("position %d -> %d = %d\n", i, t3[i], ot3[i]);
        assert(3, t3[i] == ot3[i]);
    }
//test 4
    int t4[5];
    int ot4[5];
    int n4 = sizeof(t4);
    ft_bzero(t4, n4);
    bzero(ot4, sizeof(ot4));
    for(int i = 0; i < n4/4; i++)
    {
        //printf("position %d -> %d = %d\n", i, t4[i], ot4[i]);
        assert(4, t4[i] == ot4[i]);
    }
//test 5
    int t5[10000];
    int ot5[10000];
    int n5 = sizeof(t5);
    ft_bzero(t5, n5);
    bzero(ot5, sizeof(ot5));
    for(int i = 0; i < n5/4; i++)
    {
        assert(5, t5[i] == ot5[i]);
    }
// test final
    printf("Test succed\n");
    return (0);
}
