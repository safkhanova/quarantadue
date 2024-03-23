/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 05:35:20 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/03/23 17:20:48 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*substring;

	s_len = 0;
	i = 0;
	substring = (char *)malloc((len + 1) * sizeof(char));
	if (substring == NULL || s == NULL)
		return (NULL);
	while (s[s_len] != '\0')
		s_len++;
	if (start >= s_len)
		return (NULL);
	if (len > s_len - start)
		len = s_len - start;
	while (i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[len] = '\0';
	return (substring);
}
