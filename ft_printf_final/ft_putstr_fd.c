/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:37:25 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/07/31 19:18:20 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, size_t *ret, size_t *i)
{
	size_t	m;
	size_t	l;
	char	*nl;

	m = 0;
	*i = *i + 1;
	nl = "(null)";
	if (s == NULL)
	{
		while (m < 6)
			ft_putchar_fd(nl[m++], fd, ret);
		return ;
	}
	if (!s)
		return ;
	l = ft_strlen(s);
	while (m < l)
		ft_putchar_fd(s[m++], fd, ret);
}
