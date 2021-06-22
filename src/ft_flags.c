/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 14:08:04 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/22 18:38:47 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/libft.h"

int	ft_dash(t_print *tab, const char *format, int pos)
{
	tab->dash = 1;
	tab->zero = 0;
	pos++;
	while (format[pos] == '-' || format[pos] == '0')
		pos++;
	pos = ft_width(tab, format, pos);
	return (pos);
}

int	ft_zero(t_print *tab, const char *format, int pos)
{
	tab->zero = 1;
	pos++;
	while (format[pos] == '-' || format[pos] == '0')
	{
		if (format[pos] == '-')
		{
			tab->zero = 0;
			tab->dash = 1;
		}
		pos++;
	}
	pos = ft_width(tab, format, pos);
	return (pos);
}

int	ft_star(t_print *tab, const char *format, int pos)
{
	(void)format;
	pos++;
	if (!tab->dot)
		tab->width = va_arg(tab->args, int);
	else if (tab->dot)
		tab->precision = va_arg(tab->args, int);
	return (pos);
}

int	ft_space(t_print *tab, int pos)
{
	tab->ret += write(1, " ", 1);
	pos++;
	return (pos);
}

int	ft_dot(t_print *tab, const char *format, int pos)
{
	tab->dot = 1;
	pos++;
	if (ft_isdigit(format[pos]))
	{
		while (format[pos] == '0' && ft_isdigit(format[pos + 1]))
			pos++;
		tab->precision = ft_atoi(format + pos);
		pos += ft_nbrlen(tab->precision, 10);
	}
	else if (format[pos] == '*')
		pos = ft_star(tab, format, pos);
	return (pos);
}
