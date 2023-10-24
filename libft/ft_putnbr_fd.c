/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:20:43 by natalia           #+#    #+#             */
/*   Updated: 2023/10/24 16:21:02 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Prototype:
		void ft_putnbr_fd(int n, int fd);
	Parameters:
		n: The integer to output.
		fd: The file descriptor on which to write.
	External functs:
		write
	Description:
		Outputs the integer ’n’ to the given filedescriptor.
*/
#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*num;
	int		i;

	i = 0;
	if (n == -2147483648)
	{
		num = "-2147483648";
		while (num[i] != '\0')
		{
			ft_putchar_fd(num[i], fd);
			i++;
		}
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}
