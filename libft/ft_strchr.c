/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 21:02:08 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/03/24 07:36:31 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	while (*s != '\0')
	{
		if (*s == (const char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
