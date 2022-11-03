/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:13:19 by malaakso          #+#    #+#             */
/*   Updated: 2022/11/03 17:36:01 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	new_str_len;
	size_t	i;
	size_t	j;

	new_str_len = ft_strlen(s1) + ft_strlen(s2);
	new_string = malloc(new_str_len + 1);
	if (!new_string)
		return (0);
	new_string[new_str_len] = 0;
	i = 0;
	while (s1[i])
	{
		new_string[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new_string[i] = s2[j];
		i++;
		j++;
	}
	return (new_string);
}
