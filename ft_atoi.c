/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:44:47 by malaakso          #+#    #+#             */
/*   Updated: 2022/11/02 16:50:45 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	ans;
	int		sign;
	size_t	long_max;

	ans = 0;
	sign = 1;
	if (!*str)
		return (0);
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	long_max = 9223372036854775807;
	while (*str >= '0' && *str <= '9')
	{
		if (ans > long_max)
			break ;
		ans = ans * 10 + (*str - '0');
		str++;
	}
	if (ans > long_max)
	{
		if (sign == 1)
			ans = long_max;
		else if (ans > long_max + 1)
			ans = long_max + 1;
	}
	return ((int)ans * sign);
}
