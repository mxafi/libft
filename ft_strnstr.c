/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:16:29 by malaakso          #+#    #+#             */
/*   Updated: 2022/11/09 19:37:50 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*p;
	char	*len_addr;
	size_t	n_len;

	p = (char *)haystack;
	len_addr = p + len - 1;
	if (*needle == '\0')
		return (p);
	n_len = ft_strlen(needle);
	if (!len)
		return (0);
	while (*p && p <= len_addr)
	{
		p = ft_strchr(p, needle[0]);
		if (!p)
			break ;
		if (((size_t)len_addr - (size_t)p + 1) >= n_len)
		{
			if (!ft_strncmp(p, needle, n_len))
				return (p);
		}
		p++;
	}
	return (0);
}
