#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"

void assert (int condition);

int	main(void)
{
	char	* restrict dst = "avocado";
	char	* restrict src = "is good";
    char	* restrict dst1 = "avocado";
	char	* restrict src1 = "is good";
    size_t     len;

    len = 5;
	ft_strlcpy(dst, src, len);
    assert(ft_strlcpy(dst, src, len) == strlcpy(dst1, src1, len));
	printf("%s", dst);
	return (0);
}