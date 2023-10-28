/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:44:47 by malaakso          #+#    #+#             */
/*   Updated: 2023/10/28 20:38:05 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_basic.h"

static int	is_whitespace(char c)
{
	if ((c > 8 && c < 14) || c == 32)
		return (1);
	return (0);
}

static int	clamp_overflow(size_t input, size_t max_value, int sign)
{
	if (input > max_value)
	{
		if (sign == 1)
			return ((int)max_value);
		else if (input > max_value + 1)
			return ((int)(max_value + 1));
	}
	return ((int)input * sign);
}

int	ft_atoi(const char *str)
{
	size_t	ans;
	int		sign;
	size_t	long_max;

	ans = 0;
	sign = 1;
	if (!*str)
		return (0);
	while (is_whitespace(*str))
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
	return (clamp_overflow(ans, long_max, sign));
}
