/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 01:00:26 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/04/12 22:15:15 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t size)
{
	unsigned char	*byte_ptr;
	size_t			i;

	byte_ptr = ptr;
	i = 0;
	while (i < size)
	{
		*byte_ptr++ = (unsigned char) value;
		i++;
	}
	return (ptr);
}
