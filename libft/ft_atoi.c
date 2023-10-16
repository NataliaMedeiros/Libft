/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:02:40 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/13 16:46:39 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
       Library: 
              include <stdlib.h>
       Definition:
              int atoi(const char *nptr);
*/
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *nptr)
{
       int i; //index to go thought the char nptr
       int number; //variable that you receive the number converted
       int positive_or_negative; //variable that you define if the number is positive or negative

       i = 0;
       number = 0;
       positive_or_negative = 1;
       if(nptr[i] == '-')
       {
              positive_or_negative = -1;
              i++;
       }
       while (nptr[i] != '\0')
       {
              if (nptr[i] >= '0' && nptr[i] <= '9')
              {
                     number = number * 10 + (nptr[i] - '0');
                     /*the * 10 makes the number go one space to
                     the right, example, if nptr was 1994 and 
                     initial number was 0 this line will do:
                     0 * 10 + 1 and then
                     1 * 10 + 9 and then
                     19 * 10 + 9 and then
                     199 *10 + 4 and the number will return 1994*/
              }
              else
              {
                     return(number);
              }
              i++;
       }
       number *= positive_or_negative;
       return (number);
}