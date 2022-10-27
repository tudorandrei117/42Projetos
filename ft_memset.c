/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:53:50 by tburlacu          #+#    #+#             */
/*   Updated: 2022/10/27 12:13:37 by tburlacu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t	i;

	i = 0;
	src = s;
	while (i < n)
	{
		*src = (unsigned char) c;
		src++;
		i++;
	}
	return (src);
}

  #include "stdio.h"
int main()
{
	char str[] = "Isto pelo meio vai estar todo alternado";
	ft_memset(str,'@', 8);
	printf("%s", str);
}  