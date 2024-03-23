/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:05:42 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/03/21 19:32:09 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*byte_ptr;
	size_t			i;

	byte_ptr = s;
	i = 0;
	while (i < n)
	{
		*byte_ptr++ = (unsigned char)0;
		i++;
	}
}
