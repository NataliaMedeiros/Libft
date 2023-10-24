#include <unistd.h>
#include "../libft/libft.h"


int	main(void)
{
	char character = 'A'; // The character you want to output
	int file_descriptor = STDOUT_FILENO; // The file descriptor for standard output

	ft_putchar_fd(character, file_descriptor); // Outputs 'A' to the console
	return (0);
}
