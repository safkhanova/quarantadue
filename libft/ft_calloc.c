/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:46:47 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/03/23 17:16:50 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t	total_size;
	void	*ptr;
	char	*current_ptr;
	size_t	i;

	total_size = num_elements * element_size;
	ptr = malloc(total_size);
	if (ptr != NULL)
	{
		current_ptr = (char *)ptr;
		i = 0;
		while (i < total_size)
		{
			*current_ptr = 0;
			current_ptr++;
			i++;
		}
	}
	return (ptr);
}
