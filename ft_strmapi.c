/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oholgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 18:40:40 by oholgado          #+#    #+#             */
/*   Updated: 2021/06/16 18:52:27 by oholgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new_str;

	if (s && f)
	{
		new_str = (char *)malloc(sizeof(*new_str) * ft_strlen(s) + 1);
		if (new_str)
		{
			i = 0;
			while (s[i] != '\0')
			{
				new_str[i] = (*f)(i, s[i]);
				i++;
			}
			new_str[i] = '\0';
			return (new_str);
		}
	}
	return (NULL);
}
