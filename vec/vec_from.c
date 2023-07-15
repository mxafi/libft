/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_from.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:45:52 by malaakso          #+#    #+#             */
/*   Updated: 2023/07/14 17:15:50 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"
#include "../libft.h"

/**
 * @brief Copies data from memory to a new vector.
 * 
 * @param dst pointer to destination vector
 * @param src pointer to some memory
 * @param len element count
 * @param elem_size element size in bytes
 * @return int positive value on success
 */
int	vec_from(t_vec *dst, void *src, size_t len, size_t elem_size)
{
	size_t	i;
	size_t	j;

	if (vec_new(dst, len, elem_size) < 0 && !src)
		return (-1);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < elem_size)
		{
			dst->memory[(i * elem_size) + j]
				= ((unsigned char *)src)[(i * elem_size) + j];
			j++;
		}
		i++;
	}
	return (1);
}
