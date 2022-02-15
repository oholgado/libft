/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oholgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:53:57 by oholgado          #+#    #+#             */
/*   Updated: 2021/07/01 12:32:42 by oholgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	itoa_size(long n)
{
	size_t	size;

	size = 0;
	if (n < 0)
		size = 1;
	while (1)
	{
		n = n / 10;
		size++;
		if (n == 0)
			break ;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*new_str;
	size_t	size;
	long	num;

	num = n;
	size = itoa_size(n);
	new_str = malloc(sizeof(char) * (size + 1));
	if (!new_str)
		return (NULL);
	if (n < 0)
	{
		new_str[0] = '-';
		num = num * -1;
	}
	new_str[size] = '\0';
	while (1)
	{
		new_str[size - 1] = (num % 10) + '0';
		num = num / 10;
		size--;
		if (num == 0)
			break ;
	}
	return (new_str);
}
