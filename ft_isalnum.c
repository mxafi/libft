/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:46:28 by malaakso          #+#    #+#             */
/*   Updated: 2022/10/24 16:49:53 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_isalnum(int c)
{
        if ((c > 64 && c < 91) || (c > 96 && c < 123))
            return (1);
        else if (c > 47 && c < 58)
			return (1);
		else
			return (0);
}
