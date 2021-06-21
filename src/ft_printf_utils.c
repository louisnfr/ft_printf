/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 18:23:50 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/21 16:32:37 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

void	ft_weird(t_print *tab)
{
	if (tab->width < 0)
		tab->width *= -1;
	while (tab->width-- > 0)
		tab->ret += write(1, " ", 1);
}

void	ft_null_pointer(t_print *tab)
{
	if (tab->width > tab->precision)
	{
		while (tab->width-- > (tab->precision + 2))
			tab->ret += write(1, " ", 1);
	}
	tab->ret += write(1, "0x", 2);
	while (tab->precision-- > 0)
		tab->ret += write(1, "0", 1);
}

int	ft_width(t_print *tab, const char *format, int pos)
{
	if (ft_isdigit(format[pos]))
	{
		while (format[pos] == '0' && ft_isdigit(format[pos + 1]))
			pos++;
		tab->width = ft_atoi(format + pos);
		pos += ft_nbrlen(tab->width, 10);
	}
	if (format[pos] == '*')
	{
		tab->width = va_arg(tab->args, int);
		pos++;
	}
	return (pos);
}
