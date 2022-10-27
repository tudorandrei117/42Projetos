/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:04:11 by tburlacu          #+#    #+#             */
/*   Updated: 2022/10/27 11:32:09 by tburlacu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*destination;
	unsigned int	i;

	source = (unsigned char *)src;
	destination = (unsigned char *)dest;
	i = 0;
	while (i < n || (destination[i] == source[i]))
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}

/* #include "stdio.h"
int main()
{
	char str1[] = "oldstring";
	char str2[] = "NEWSTRING";
	
	printf("Before memmove dest = %s, src = %s\n", str1, str2);
	ft_memmove(str1, str2, 9);
	printf("After memmove dest = %s, src = %s\n", str1, str2);
}  */