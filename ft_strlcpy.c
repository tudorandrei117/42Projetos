/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:41:41 by tburlacu          #+#    #+#             */
/*   Updated: 2022/10/27 14:39:16 by tburlacu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (0);
}

/*  #include "string.h"
 #include "stdio.h"


int main ()
{
	char str1[] = "abcdefg";
	char str2[] = "hijklallogalera";
	
	ft_strlcpy(str2, str1, 5);
	printf("%s\n", str2);

}  */