/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:46:19 by tburlacu          #+#    #+#             */
/*   Updated: 2022/10/27 14:44:21 by tburlacu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

int ft_atoi(const char *nptr)
{
	size_t sum;
	
	sum = 0;

	while(*nptr >= '0' && *nptr <= '9')
	{
		sum = (sum * 10) + (*nptr - '0');
		nptr++;
	}
	return (sum);
}

#include "stdio.h"
int main()
{

   int val;
   char str[] = "98993489";
   char str2[] = "tutorialspoint.com";
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);
   val = ft_atoi(str2);
   printf("String value = %s, Int value = %d\n", str2, val);

   return(0);
}