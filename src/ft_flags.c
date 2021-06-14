/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 14:08:04 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/14 23:10:44 by lraffin          ###   ########.fr       */
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
	tab->width= va_arg(tab->args, int);
	return (pos);
}

int	ft_width(t_print *tab, const char *format, int pos)
{
	if (ft_isdigit(format[pos]))
	{
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

int		ft_dot(t_print *tab, const char *format, int pos)
{
	tab->dot = 1;
	pos++;
	if (tab->width && !tab->zero && !tab->dash)
	{
		tab->minimal = tab->width;
		tab->width = 0;
	}
	if (ft_isdigit(format[pos]))
	{
		tab->maximal = ft_atoi(format + pos);
		pos += ft_nbrlen(tab->maximal, 10);
	}
	return (pos);
}
