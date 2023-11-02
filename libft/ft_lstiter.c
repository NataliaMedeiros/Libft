/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:45:17 by natalia           #+#    #+#             */
/*   Updated: 2023/11/02 11:50:04 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	// if (!lst || !f)
	// 	return (NULL);
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
