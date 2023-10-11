#include <stdio.h>
#include <bsd/string.h>
#include "../libft/libft.h"

void assert (int condition);

int main(void)
{
    char s[] = "I love coffee";
    char s1[] = "I love coffee";

    ft_bzero(s, strlen(s));
    assert (strcmp(s, s1));
    printf("Succes");
    return (0);
}
