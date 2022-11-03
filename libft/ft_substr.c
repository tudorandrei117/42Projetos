/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:57:14 by tburlacu          #+#    #+#             */
/*   Updated: 2022/11/03 13:29:35 by tburlacu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	i2;
	char	*str;

	i = 0;
	i2 = 0;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (0);
	while (s[i] != '\0')
	{
		if (i >= start && i2 < len)
		{
		str[i2] = s[i];
				i2++;
		}
		i++;
	}
	str[i2] = '\0';
	return (str);
}
