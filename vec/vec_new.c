/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:05:23 by malaakso          #+#    #+#             */
/*   Updated: 2023/07/09 14:04:05 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

int	vec_new(t_vec *dst, size_t init_len, size_t elem_size)
{
	if (!dst || elem_size == 0)
		return (-1);
	if (init_len > 0)
	{
		dst->memory = malloc(sizeof(dst->memory) * (init_len * elem_size));
		if (!dst->memory)
			return (-1);
	}
	dst->elem_size = elem_size;
	dst->len = init_len;
	dst->alloc_size = init_len * elem_size;
	return (1);
}
