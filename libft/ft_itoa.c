/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:34:56 by tburlacu          #+#    #+#             */
/*   Updated: 2022/11/07 15:19:40 by tburlacu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	int	size;

	if (n > 0)
		size = 0;
	else
		size = 1;
	return (size);
}

static int	ft_trigger(int n)
{
	int	trigger;

	if (n < 0)
		trigger = -1;
	else
	trigger = 1;
	return (trigger);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	num;
	size_t	size;

	size = ft_size(n);
	num = (size_t)n * ft_trigger(n);
	while (n)
	{
		n /= 10;
		size++;
	}
	str = (char *)malloc(size + 1);
	if (!str)
		return (0);

		
	*(str + size--) = '\0';
	while (num > 0)
	{
		*(str + size--) = num % 10 + '0';
		num /= 10;
	}
	if (size == 0 && str[1] == '\0')
		*(str + size) = '0';
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}

/*  int main()
{
	long int a;
	a = -3000000000000000;
	printf("%s", ft_itoa(a));
}  */