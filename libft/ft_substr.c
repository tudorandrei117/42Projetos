/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:57:14 by tburlacu          #+#    #+#             */
/*   Updated: 2022/11/08 15:05:41 by tburlacu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (start > ft_strlen(s))
	{
			str = (char *)malloc(sizeof(char));
			*str = '\0';
		return (str);
	}
	if (ft_strlen(s) >= len)
			str = (char *)malloc(sizeof(char) * (len + 1));
	else
		str = (char *)malloc(sizeof(char) * (ft_strlen(s) - start +1));
	if (!str)
		return (0);
	while (i < len)
	{	
		str[i] = s[start++];
		i++;
	}
	str[i] = '\0';
	return (str);
}
