/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:52:49 by tburlacu          #+#    #+#             */
/*   Updated: 2022/10/27 11:37:25 by tburlacu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*source;

	source = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		source[i] = '\0';
		i++;
	}
}

/* #include "stdio.h"
#include "string.h"

int main()
{
	char str[] = "1234567890";
	ft_bzero(str, 2);
	printf("%s", str);
	bzero(str, 0);
	printf("%s", str);
	
} */
