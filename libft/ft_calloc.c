/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:10:11 by tburlacu          #+#    #+#             */
/*   Updated: 2022/11/03 12:22:58 by tburlacu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*destination;

	destination = malloc(sizeof(i));
	i = nmemb * size;
	if (!destination)
	{
		return (0);
	}
	ft_memset(destination, 0, i);
	return (destination);
}
