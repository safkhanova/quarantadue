/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 07:32:08 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/03/23 21:24:41 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*to;
	const unsigned char	*from;

	to = (unsigned char *) dst;
	from = (unsigned char *) src;
	if (src == NULL && dst == NULL)
		return (NULL);
	else if (dst <= src)
	{
		while (len--)
		{
			*to++ = *from++;
		}
	}
	else if (dst > src)
	{
		to += len - 1;
		from += len - 1;
		while (len--)
		{
			*to-- = *from--;
		}
	}
	return (dst);
}
