#include <bsd/stdio.h>
#include <string.h>
#include "../libft/libft.h"

void assert (int condition);

int main(void)
{
//test 0
    char t[10];
    char ot[10];
    int n = 10;
    ft_bzero(t, n);
    bzero(ot, n);
    for(int i = 0; i < n; i++)
    {
        //printf("position %d -> %c = %c\n", i, t[i], ot[i]);
        assert(t[i] == ot[i]);
    }
//test 1
    char t1[] = "I love coffee";
    char ot1[] = "I love coffee";
    int n1 = sizeof(t1);
    ft_bzero(t1, n1);
    bzero(ot1, sizeof(ot1));
    for(int i = 0; i < n1; i++)
    {
        //printf("position %d -> %c = %c\n", i, t1[i], ot1[i]);
        assert(t1[i] == ot1[i]);
    }
//test 2
    char t2[] = "";
    char ot2[] = "";
    int n2 = sizeof(t2);
    ft_bzero(t2, n2);
    bzero(ot2, sizeof(ot2));
    for(int i = 0; i < n2; i++)
    {
        //printf("position %d -> %c = %c\n", i, t2[i], ot2[i]);
        assert(t2[i] == ot2[i]);
    }
//test 3
    int t3[] = {1, 2, 3, 4, 5};
    int ot3[] = {1, 2, 3, 4, 5};
    int n3 = sizeof(t3);
    ft_bzero(t3, n3);
    bzero(ot3, sizeof(ot3));
    for(int i = 0; i < n3/4; i++)
    {
        //printf("position %d -> %d = %d\n", i, t3[i], ot3[i]);
        assert(t3[i] == ot3[i]);
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
        assert(t4[i] == ot4[i]);
    }
//test 5
    int t5[10000];
    int ot5[10000];
    int n5 = sizeof(t5);
    ft_bzero(t5, n5);
    bzero(ot5, sizeof(ot5));
    for(int i = 0; i < n5/4; i++)
    {
        assert(t5[i] == ot5[i]);
    }
//test final
    printf("Test succed\n");
    return (0);
}