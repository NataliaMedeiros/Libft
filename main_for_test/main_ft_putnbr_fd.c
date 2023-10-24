#include <unistd.h>
#include "../libft/libft.h"

int	main(void)
{
	int n = -2147483648;
	int file_descriptor = STDOUT_FILENO; // The file descriptor for standard output

	ft_putnbr_fd(n, file_descriptor); // Outputs 'A' to the console
	return (0);
}
