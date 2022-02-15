/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oholgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 12:45:04 by oholgado          #+#    #+#             */
/*   Updated: 2021/07/01 15:10:30 by oholgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	character;
	size_t			i;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	character = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		*d = s[i];
		d++;
		if (s[i] == character)
		{
			return (d);
		}
		i++;
	}
	return (NULL);
}
