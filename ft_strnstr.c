/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oholgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 16:22:07 by oholgado          #+#    #+#             */
/*   Updated: 2021/06/14 15:36:38 by oholgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	char	*haystack_char;

	haystack_char = (char *)haystack;
	needle_len = ft_strlen(needle);
	if (needle[0] == '\0')
		return (haystack_char);
	while (*haystack_char && len >= needle_len)
	{
		if (*haystack_char == *needle)
		{
			if (ft_strncmp(needle, haystack_char, needle_len) == 0)
				return (haystack_char);
		}
		len--;
		haystack_char++;
	}
	return (NULL);
}
