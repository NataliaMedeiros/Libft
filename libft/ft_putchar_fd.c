/*
	Prototype:
		void ft_putchar_fd(char c, int fd);
	Parameters:
		c: The character to output.
		fd: The file descriptor on which to write.
	External functs:
		write
	Description:
		Outputs the character ’c’ to the given file descriptor.
*/

#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (1, &c, fd);
}
