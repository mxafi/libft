/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:28:26 by malaakso          #+#    #+#             */
/*   Updated: 2022/10/25 18:30:00 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*ft_memcpy(void	*dst, const void *src, size_t n);

static void	*ft_memcpyr(void *dst, const void *src, size_t n)
{
        while (n > 0)
        {
                dst[n - 1] = src[n - 1];
                n--;
        }
        return (dst);
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst < src)
	{
		ft_memcpy(dst, src, len);
	}
	else if (dst > src)
	{
		ft_memcpyr(dst, src, len);
	}
	return (dst);
}
