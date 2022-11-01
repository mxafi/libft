/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:12:26 by malaakso          #+#    #+#             */
/*   Updated: 2022/11/01 15:31:05 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*p;
	extern int	errno;

	p = malloc(count * size);
	if (!p)
	{
		errno = 12;
		return (0);
	}
	ft_bzero(p, count * size);
	return (p);
}
