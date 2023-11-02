/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:23:10 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/11/02 11:17:03 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../libft/libft.h"


int	main(void)
{
	char *character = "Abacate"; // The character you want to output
	int file_descriptor = STDOUT_FILENO; // The file descriptor for standard output

	ft_putendl_fd(character, file_descriptor); // Outputs 'A' to the console
	return (0);
}
