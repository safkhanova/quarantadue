/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:36:44 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/07/31 19:20:19 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(long long unsigned l, size_t *ret, int check, size_t *i)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (!check)
	{
		ft_putchar_fd('0', 1, ret);
		ft_putchar_fd('x', 1, ret);
		check++;
	}
	if (l > 15)
		ft_putptr(l / 16, ret, check, i);
	ft_putchar_fd(hexa[l % 16], 1, ret);
	if (l < 16)
		*i = *i + 1;
}
