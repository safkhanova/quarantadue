/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 07:32:08 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/03/21 20:36:12 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;
	size_t			i;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	i = 0;
	if (dest_ptr < src_ptr)
	{
		while (i < n)
			dest_ptr[i] = src_ptr[i++];
	}
	else
	{
		while (i > 0)
		{
			dest_ptr[i - 1] = src_ptr[i - 1];
			i--;
		}
	}
	return (dest);
}
