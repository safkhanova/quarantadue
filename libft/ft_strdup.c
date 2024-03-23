/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 05:07:41 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/03/23 17:16:11 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	length;
	char	*duplicate;
	size_t	i;

	length = 0;
	i = 0;
	duplicate = (char *)malloc((length + 1) * sizeof(char));
	while (str[length] != '\0')
		length++;
	if (duplicate == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		duplicate[i] = str[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
