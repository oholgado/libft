/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oholgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:07:01 by oholgado          #+#    #+#             */
/*   Updated: 2021/06/17 15:10:24 by oholgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!s1)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) + 1;
	while (s1[i] != '\0')
	{
		if (!ft_strchr(set, s1[i]))
			break ;
		i++;
	}
	while (--j > i)
	{
		if (!ft_strchr(set, s1[j - 1]))
			break ;
	}
	new_str = ((char *)malloc(((j - i) + 1) * sizeof(char)));
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, s1 + i, j - i);
	new_str[j - i] = '\0';
	return (new_str);
}
