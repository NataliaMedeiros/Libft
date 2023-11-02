/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:24:03 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/11/02 11:16:21 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"

int	main(void)
{
	char	*s;
	int		start;
	size_t	len;

	s = "avocado";
	start = 2;
	len = 5;
	printf("%s", ft_substr(s, start, len));
}

// int main(void)
// {
// 	signal(SIGSEGV, sigsegv);
// 	title("ft_substr\t: ")

// 	char * s = ft_substr("tripouille", 0, 42000);
// 	/* 1 */ check(!strcmp(s, "tripouille"));
// 	/* 2 */ mcheck(s, strlen("tripouille") + 1); free(s); showLeaks();

// 	s = ft_substr("tripouille", 1, 1);
// 	/* 3 */ check(!strcmp(s, "r"));
// 	/* 4 */ mcheck(s, 2); free(s); showLeaks();

// 	s = ft_substr("tripouille", 100, 1);
// 	/* 5 */ check(!strcmp(s, ""));
// 	/* 6 */ mcheck(s, 1); free(s); showLeaks();

// 	char * str = strdup("1");
// 	s = ft_substr(str, 42, 42000000);
// 	/* 7 */ check(!strcmp(s, ""));
// 	/* 8 */ mcheck(s, 1); free(s); free(str); showLeaks();

// 	str = strdup("0123456789");
// 	s = ft_substr(str, 9, 10);
// 	/* 9  mbueno-g */ check(!strcmp(s, "9"));
// 	/* 10  mbueno-g */ mcheck(s, 2); free(s); free(str); showLeaks();

// 	s = ft_substr("42", 0, 0);
// 	/* 11  fcaquard */ check(!strcmp(s, ""));
// 	/* 12  fcaquard */ mcheck(s, 1); free(s); showLeaks();

// 	s = ft_substr("BONJOUR LES HARICOTS !", 8, 14);
// 	/* 13  dfarhi */ check(!strcmp(s, "LES HARICOTS !"));
// 	/* 14  dfarhi */ mcheck(s, 15); free(s); showLeaks();

// 	s = ft_substr("test", 1, 2);
// 	/* 15  dfarhi */ check(!strcmp(s, "es"));
// 	/* 16  dfarhi */ mcheck(s, 3); free(s); showLeaks();

// 	write(1, "\n", 1);
// 	return (0);
// }
