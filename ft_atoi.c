/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oholgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:37:51 by oholgado          #+#    #+#             */
/*   Updated: 2022/02/03 17:16:40 by oholgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || str[i] == 9 || str[i] == 10
		|| str[i] == 11 || str[i] == 12 || str[i] == 13)
		i++;
	return (i);
}

static int	ft_result(unsigned long long num, int sign)
{
	unsigned long long	i;

	i = 9223372036854775807;
	if (num > i)
	{
		if (sign == -1 && num != i++)
			num = 0;
		else
			num = -1;
	}
	return (num);
}

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	i;
	unsigned long long	result;

	sign = 1;
	i = ft_isspace(str);
	result = 0;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result = ft_result(result, sign);
	return ((int)sign * result);
}
