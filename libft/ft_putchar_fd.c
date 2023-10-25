/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:10:34 by natalia           #+#    #+#             */
/*   Updated: 2023/10/25 12:10:43 by natalia          ###   ########.fr       */
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

#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (1, &c, fd);
}
