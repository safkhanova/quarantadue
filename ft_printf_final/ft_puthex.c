/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:33:47 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/07/31 19:22:02 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int x, char c, size_t *ret, size_t *i)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (c == 'X')
		hexa = "0123456789ABCDEF";
	if (x > 15)
		ft_puthex(x / 16, c, ret, i);
	ft_putchar_fd(hexa[x % 16], 1, ret);
	if (x < 16)
		*i = *i + 1;
}
