#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"

void assert (int condition);

char *string_gen(int size);

int	main(void)
{
	char	dst[50] = "avocado";
	char	src[] = " is good";
    char	dst1[50] = "avocado";
	char	src1[] = " is good";
    
    size_t result_my_fuction;
    size_t result_original_function;

    result_my_fuction = ft_strlcat(dst, src, 17);
    result_original_function = strlcat(dst1, src1, 17);
    printf("%zu\n", result_my_fuction);
    printf("%zu\n", result_original_function);
	assert(result_my_fuction == result_original_function);

    char	*d = string_gen(10);
	char	*s = string_gen(4);
    // char	*d1 = d;
	// char	*s1 = s;
    
    assert(ft_strlcat(d, s, 6) == strlcat(d, s, 6));
    
    
    
    //size_t result_my_fuctionT2;
    //size_t result_original_functionT2;

    // printf("%s\n", d);
    // printf("%s\n", d1);
    // printf("%s\n", s);
    // printf("%s\n", s1);
    // //result_my_fuctionT2 = ft_strlcat(d, s, 6);
    // //result_original_functionT2 = strlcat(d1, s1, 6);
    // printf("%zu\n", ft_strlcat(d, s, 6));
    // printf("%zu\n", strlcat(d1, s1, 6));
	// assert(ft_strlcat(d, s, 6) == strlcat(d1, s1, 6));
	
	return (0);
}