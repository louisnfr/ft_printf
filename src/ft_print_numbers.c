/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:06:04 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/22 18:40:50 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

void	ft_print_integer(t_print *tab)
{
	int	n;

	n = va_arg(tab->args, int);
	tab->length = ft_nbrlen(n, 10);
	if (n < 0)
		tab->sign = 1;
	if (tab->dot && !tab->precision && !n)
		return (ft_special(tab));
	ft_update_width_int(tab);
	if (tab->sign && tab->zero && !tab->dot && !tab->dash)
		tab->ret += write(1, "-", 1);
	if (!tab->dash)
		ft_put_width(tab);
	if (tab->sign && !tab->zero)
		tab->ret += write(1, "-", 1);
	while (tab->dot && tab->precision-- - ft_nbrlen(n, 10) > 0)
		tab->ret += write(1, "0", 1);
	tab->ret += ft_putnbr_ret(n);
	if (tab->dash)
		ft_put_width(tab);
}

void	ft_print_unsigned(t_print *tab)
{
	unsigned int	u;

	u = va_arg(tab->args, unsigned int);
	tab->length = ft_nbrlen_u(u, 10);
	if (tab->dot && !tab->precision && !u)
		return (ft_special(tab));
	ft_update_width_int(tab);
	if (tab->width && !tab->dash)
		ft_put_width(tab);
	while (tab->precision-- - ft_nbrlen_u(u, 10) > 0)
		tab->ret += write(1, "0", 1);
	tab->ret += ft_putnbr_u_ret(u);
	if (tab->width && tab->dash)
		ft_put_width(tab);
}

void	ft_print_pointer(t_print *tab)
{
	unsigned long	p;

	p = va_arg(tab->args, unsigned long);
	if (!(!p && tab->dot))
		tab->length = ft_nbrlen_ul(p, 16) + 2;
	else
		tab->length = 2;
	ft_update_width(tab);
	tab->width -= tab->length;
	if (!p && tab->dot && tab->precision > 0)
	{
		ft_null_pointer(tab);
		return ;
	}
	if (tab->width && !tab->dash)
		ft_put_width(tab);
	tab->ret += write(1, "0x", 2);
	while (tab->precision-- > 0)
		tab->ret += write(1, "0", 1);
	if (!(!p && tab->dot))
		tab->ret += ft_put0xhexa_ret(p, "0123456789abcdef");
	if (tab->width && tab->dash)
		ft_put_width(tab);
}

void	ft_print_hexa(t_print *tab, char c)
{
	unsigned int	x;

	x = va_arg(tab->args, unsigned int);
	tab->length = ft_nbrlen(x, 16);
	if (tab->dot && !tab->precision && !x)
		return (ft_special(tab));
	ft_update_width_int(tab);
	if (tab->width && !tab->dash)
		ft_put_width(tab);
	while (tab->precision-- - ft_nbrlen(x, 16) > 0)
		tab->ret += write(1, "0", 1);
	if (c == 'x')
		tab->ret += ft_puthexa_ret(x, "0123456789abcdef");
	else
		tab->ret += ft_puthexa_ret(x, "0123456789ABCDEF");
	if (tab->width && tab->dash)
		ft_put_width(tab);
}
