/*
library -> #include <ctype.h>
int isdigit(int c);;
description: checks for an alphanumeric character;.
*/

#include "libft.h"

int ft_isalnum(int c)
{
    	if (ft_isalpha(c)|| ft_isdigit(c))
		    return (1);
	return (0);
    //return (ft_isalpha(c) || ft_isdigit(c));
}