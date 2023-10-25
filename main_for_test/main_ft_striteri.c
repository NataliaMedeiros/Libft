#include "../libft/libft.h"

char	my_function(unsigned int index, char c)
{
	if (index % 2 == 0)
	{
		return ((char)ft_toupper(c));
	}
	else
	{
		return ((char)ft_tolower(c));
	}
}

int	main(void)
{	char	*input;
	char	*result;

	input = "Hello, World!";
	result = ft_striteri(input, &my_function);
	printf("Result: %s\n", result);
	free(result);
	return (0);
}
