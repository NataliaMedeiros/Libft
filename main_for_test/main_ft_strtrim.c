#include <stdio.h>
#include "../libft/libft.h"

int	main(void)
{
	char *s1;
	char *set;

	s1 = "avoavavocadoavoav";
	set = "avo";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}