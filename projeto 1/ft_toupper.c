/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:36:14 by tburlacu          #+#    #+#             */
/*   Updated: 2022/10/24 16:45:28 by tburlacu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "stdio.h"
#include "unistd.h"

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
int	main(void)
{
char c = 'a';
printf("%c ", ft_toupper(c));

//printf("%s", c);
}