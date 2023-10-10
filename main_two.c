#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isalpha(c) == ' ')
        printf("Enter a character: ");
    else
        printf("%d", ft_isalnum(c));
    return 0;
}