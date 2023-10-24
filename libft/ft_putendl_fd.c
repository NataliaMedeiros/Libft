/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:32:25 by natalia           #+#    #+#             */
/*   Updated: 2023/10/24 16:02:34 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Prototype:
		void ft_putendl_fd(char *s, int fd);
	Parameters:
		s: The string to output.
		fd: The file descriptor on which to write.
	External functs:
		write
	Description:
		Outputs the string ’s’ to the given file descriptor followed by a newline.
*/
#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	write(1, "\n", 1);
}
