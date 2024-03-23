/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 07:49:24 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/03/21 19:43:40 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*byte_ptr;
	size_t			i;

	byte_ptr = ptr;
	i = 0;
	while (i < num)
	{
		*byte_ptr++ = (unsigned char) value;
		i++;
	}
	return (ptr);
}
