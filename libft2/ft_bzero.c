/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 12:46:45 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/04/14 12:55:59 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero (void *s, size_t n)
{
	unsigned char *byte_ptr;
	size_t i;

	byte_ptr = s;
	i = 0;
	while (i < n)
	{
		*byte_ptr = 0;
		byte_ptr++;
		i++;
	}
}