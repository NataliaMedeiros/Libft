#include <unistd.h>
#include "../libft/libft.h"

void	assert(int test_number, int condition);

int	main(void)
{
	char	character;
	character = 'A';
	int file_descriptor = STDOUT_FILENO; // The file descriptor for standard output

	ft_putchar_fd(character, file_descriptor); // Outputs 'A' to the console
	return (0);
}
