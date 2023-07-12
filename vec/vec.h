/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:00:36 by malaakso          #+#    #+#             */
/*   Updated: 2023/07/12 17:02:29 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_H
# define VEC_H

# include "stdlib.h"
# include "unistd.h"
# include "string.h"
# include "stdbool.h"

/**
 * The struct to describe a vector.
 * memory:		pointer to the first byte of allocated memory.
 * elem_size:	size of a single element in bytes.
 * alloc_size:	size of the sum of allocated bytes.
 * len:			count of elements currently in the vector.
 */
typedef struct s_vec
{
	unsigned char	*memory;
	size_t			elem_size;
	size_t			alloc_size;
	size_t			len;
}					t_vec;

void	vec_free(t_vec *src);
int		vec_new(t_vec *dst, size_t init_len, size_t elem_size);
int		vec_from(t_vec *dst, void *src, size_t len, size_t elem_size);
int		vec_copy(t_vec *dst, t_vec *src);

#endif
