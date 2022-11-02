/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudor <tudor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:10:11 by tburlacu          #+#    #+#             */
/*   Updated: 2022/11/02 00:57:54 by tudor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*destination;

	i = nmemb * size;
	if (!(destination = malloc(i)))
	{
		return (0);
	}
	ft_memset(destination, 0, i);
	return (destination);
}