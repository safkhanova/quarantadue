/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:06:26 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/03/22 16:18:42 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*s;
	unsigned char		uc;

	s = (const unsigned char *)str;
	uc = (unsigned char)c;
	while (n-- > 0)
	{
		if (*s == uc)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
