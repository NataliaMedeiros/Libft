#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"

void assert (int condition);

int	main(void)
{
	char	*s = "abacate";
	char	ch = 'a';

    assert(ft_strrchr(s, ch) == strrchr(s, ch));
	printf("Succes '%s' is iqual = '%s'\n", ft_strrchr(s, ch), strrchr(s, ch));
	
    s = "www.ns.nl";
	ch = '.';

    assert(ft_strrchr(s, ch) == strrchr(s, ch));
	printf("Succes '%s' is iqual = '%s'\n", ft_strrchr(s, ch), strrchr(s, ch));
    
    s = "abacate";
	ch = 'b';

    assert(ft_strrchr(s, ch) == strrchr(s, ch));
	printf("Succes '%s' is iqual = '%s'\n", ft_strrchr(s, ch), strrchr(s, ch));
    
    s = "abacate";
	ch = 'n';

    assert(ft_strrchr(s, ch) == strrchr(s, ch));
	printf("Succes '%s' is iqual = '%s'\n", ft_strrchr(s, ch), strrchr(s, ch));
    return (0);
}
