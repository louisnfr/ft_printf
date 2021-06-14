/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:06:04 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/14 16:30:03 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

void	ft_print_integer(t_print *tab)
{
	int	n;

	n = va_arg(tab->args, int);
	tab->length = ft_nbrlen(n, 10);
	if (tab->width && !tab->dash)
		ft_put_width(tab);
	tab->ret += ft_putnbr_ret(n);
	if (tab->width && tab->dash)
		ft_put_width(tab);
}

void	ft_print_pointer(t_print *tab)
{
	unsigned long p;
	
	p = va_arg(tab->args, unsigned long);
	tab->length = ft_nbrlen_ul(p, 16) + 2;
	if (tab->width && !tab->dash)
		ft_put_width(tab);	
	tab->ret += ft_put0xhexa_ret(p, "0123456789abcdef");
	if (tab->width && tab->dash)
		ft_put_width(tab);
}
