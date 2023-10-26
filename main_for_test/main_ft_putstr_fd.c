/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:23:24 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/26 08:23:24 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../libft/libft.h"


int	main(void)
{
	char *character = "Abacate"; // The character you want to output
	int file_descriptor = STDOUT_FILENO; // The file descriptor for standard output

	ft_putstr_fd(character, file_descriptor); // Outputs 'A' to the console
	return (0);
}
