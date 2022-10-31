/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:10:11 by tburlacu          #+#    #+#             */
/*   Updated: 2022/10/31 16:11:51 by tburlacu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t 	i;
	void 	*destination;

	i = nmemb * size;
	if(!(destination))
}






/* void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = size * count;
	if (!(dst = malloc(tot_size)))
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
} */