/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 06:39:52 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/03/22 14:51:16 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last_occurance;

	last_occurance = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
			last_occurance = (char *)str;
		str++;
	}
	if (*str == (char)c)
		last_occurance = (char *)str;
	return (last_occurance);
}
