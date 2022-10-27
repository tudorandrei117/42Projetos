/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:32:22 by tburlacu          #+#    #+#             */
/*   Updated: 2022/10/27 14:39:09 by tburlacu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;

	dlen = 0;
	i = 0;
	while (dst[dlen])
	{
	dlen++;
	}
	while (i <= size)
	{
		((unsigned char *)dst)[dlen] = ((unsigned char *)src)[i];
		i++;
		dlen++;
	}
}

/* #include "stdio.h"
int main()
{
	char str1[] = "Inicio ligado ao ";
	char str2[] = "fim";

	ft_strlcat(str1, str2, 3);
	printf("%s", str1);
} */