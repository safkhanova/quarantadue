/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:35:53 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/07/31 19:21:11 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int x, int fd, size_t *ret, size_t *i)
{
	if (x < 0)
	{
		ft_putchar_fd('-', fd, ret);
		x = -x;
	}
	if (x == -2147483648)
	{
		ft_putchar_fd('2', fd, ret);
		x = 147483648;
	}
	if (x > 9)
		ft_putnbr_fd(x / 10, fd, ret, i);
	ft_putchar_fd(x % 10 + 48, fd, ret);
	if (x < 10)
		*i = *i + 1;
}
