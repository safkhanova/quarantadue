/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:45:19 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/03/21 15:34:50 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	src_length;

	i = 0;
	if (n == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < n - 1 && src[i] != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	if (i < n)
		*(dest + i) = 0;
	src_length = 0;
	while (src[src_length] != '\0')
		src_length++;
	return (src_length);
}
