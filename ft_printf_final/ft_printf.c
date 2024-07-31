/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsafkhan <zsafkhan@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:24:05 by zsafkhan          #+#    #+#             */
/*   Updated: 2024/07/31 19:04:25 by zsafkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 
 
int	ft_printf(const char *ip, ...)
{
	t_list	*strct;
	int		tmp;

	strct = (t_list *)malloc(sizeof(t_list)); 
	tmp = 0; 
	strct->i = 0; 
	strct->ret = 0;
	va_start(strct->ap, ip); 
	while (ip[strct->i]) 
	{ 
		if (ip[strct->i] == '%')
		{
			if (ip[++strct->i] == '%')
				ft_putchar(ip[strct->i], 1, &strct->ret, &strct->i); 
			else
				ft_format(strct, ip); 
		}
		else 
			ft_putchar_fd(ip[strct->i++], 1, &strct->ret);
	}
	va_end(strct->ap);
	tmp = strct->ret;
	free(strct);
	return (tmp);
} 
 
void	ft_format(t_list *st, const char *ip) 
{
	if (ip[st->i] == 'c')
		ft_putchar(va_arg(st->ap, int), 1, &st->ret, &st->i); 
	else if (ip[st->i] == 's')
		ft_putstr_fd(va_arg(st->ap, char *), 1, &st->ret, &st->i);
	else if (ip[st->i] == 'd' || ip[st->i] == 'i')
		ft_putnbr_fd(va_arg(st->ap, int), 1, &st->ret, &st->i);
	else if (ip[st->i] == 'u')
		ft_putunbr_fd(va_arg(st->ap, unsigned int), 1, &st->ret, &st->i);
	else if (ip[st->i] == 'X' || ip[st->i] == 'x')
		ft_puthex(va_arg(st->ap, unsigned int), ip[st->i], &st->ret, &st->i); 
	else if (ip[st->i] == 'p')
		ft_putptr(va_arg(st->ap, long long unsigned), &st->ret, 0, &st->i);
}
