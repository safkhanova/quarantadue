/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:40:15 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/07/31 19:17:03 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr_fd(unsigned int x, int fd, size_t *ret, size_t *i)
{
	if (x > 9)
		ft_putunbr_fd(x / 10, fd, ret, i);
	ft_putchar_fd(x % 10 + 48, fd, ret);
	if (x < 10)
		*i = *i + 1;
}
