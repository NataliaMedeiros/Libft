#include <stdio.h>
#include <bsd/string.h>
#include "../libft/libft.h"

void assert (int condition);

int main(void)
{
    printf("%s", ft_strdup("avocado"));
    printf("%s", strdup("avocado"));
    return (0);
}