#include <bsd/stdio.h>
#include <string.h>
#include "../libft/libft.h"

void assert (int condition);

int	main(void)
{
	char	*s = "abacate";
	char	ch = 'c';

    assert(ft_strchr(s, ch) == strchr(s, ch));
	printf("Succes '%s' is iqual = '%s'\n", ft_strchr(s, ch), strchr(s, ch));
    
    s = "www.ns.nl";
	ch = '.';

    assert(ft_strchr(s, ch) == strchr(s, ch));
	printf("Succes '%s' is iqual = '%s'\n", ft_strchr(s, ch), strchr(s, ch));
	
    s = "I love coffee!!!";
	ch = '.';

    assert(ft_strchr(s, ch) == strchr(s, ch));
	printf("Succes '%s' is iqual = '%s'\n", ft_strchr(s, ch), strchr(s, ch));
	printf("Test succed\n");
    return (0);
}