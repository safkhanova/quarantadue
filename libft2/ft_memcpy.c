/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 12:58:05 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/04/14 15:22:55 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest_ptr, const void *src_ptr,  size_t n)
{
	size_t i;
	
	if(!dest_ptr && !src_ptr)
		return (dest_ptr);
	i = 0;
	while (i < n)
	{
		*(char *)dest_ptr = *(char *)src_ptr;
		i++;
		dest_ptr++;
		src_ptr++;
	}
	return dest_ptr;
}
