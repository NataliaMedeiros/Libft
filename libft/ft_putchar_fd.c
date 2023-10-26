/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:18:45 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/26 15:30:24 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
