/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oholgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:58:01 by oholgado          #+#    #+#             */
/*   Updated: 2021/06/29 18:39:56 by oholgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s1_len;
	char	*str_copy;
	size_t	i;

	s1_len = ft_strlen(s1);
	str_copy = (char *)malloc((s1_len + 1) * sizeof(char));
	i = 0;
	if (str_copy == NULL)
	{
		return (NULL);
	}
	while (i < s1_len)
	{
		str_copy[i] = s1[i];
		i++;
	}
	str_copy[i] = '\0';
	return (str_copy);
}
