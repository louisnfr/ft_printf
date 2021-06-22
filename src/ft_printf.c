/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:19:39 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/22 15:43:26 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/libft.h"

t_print	*ft_init_tab(t_print *tab)
{
	tab->width = 0;
	tab->precision = 0;
	tab->zero = 0;
	tab->dot = 0;
	tab->dash = 0;
	tab->sign = 0;
	tab->length = 0;
	tab->ret = 0;
	return (tab);
}

t_print	*ft_reset_tab(t_print *tab)
{
	tab->width = 0;
	tab->precision = 0;
	tab->zero = 0;
	tab->dot = 0;
	tab->sign = 0;
	tab->dash = 0;
	tab->length = 0;
	return (tab);
}

int	ft_convert(t_print *tab, const char *format, int pos)
{
	if (format[pos] == 'c')
		ft_print_char(tab);
	else if (format[pos] == 's')
		ft_print_string(tab);
	else if (format[pos] == 'p')
		ft_print_pointer(tab);
	else if (format[pos] == 'd' || format[pos] == 'i')
		ft_print_integer(tab);
	else if (format[pos] == 'u')
		ft_print_unsigned(tab);
	else if (format[pos] == 'x')
		ft_print_hexa(tab, 'x');
	else if (format[pos] == 'X')
		ft_print_hexa(tab, 'X');
	else if (format[pos] == '%')
		ft_print_percent(tab);
	else
		return (0);
	return (pos);
}

int	ft_check_format(t_print *tab, const char *format, int pos)
{
	while (format[pos] && (!ft_isflag(format[pos])))
	{
		if (format[pos] == ' ')
			pos = ft_space(tab, pos);
		else if (format[pos] == '-')
			pos = ft_dash(tab, format, pos);
		else if (format[pos] == '.')
			pos = ft_dot(tab, format, pos);
		else if (format[pos] == '0')
			pos = ft_zero(tab, format, pos);
		else if (format[pos] == '*')
			pos = ft_star(tab, format, pos);
		else if (ft_isdigit(format[pos]))
			pos = ft_width(tab, format, pos);
		else
			return (0);
	}
	if (!format[pos])
		return (pos - 1) ;
	ft_convert(tab, format, pos);
	ft_reset_tab(tab);
	return (pos);
}

int	ft_printf(const char *format, ...)
{
	t_print	*tab;
	int		ret;
	int		i;

	if (!format)
		return (-1);
	tab = malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	ft_init_tab(tab);
	va_start(tab->args, format);
	i = -1;
	ret = 0;
	while (format[++i])
	{
		if (format[i] == '%')
			i = ft_check_format(tab, format, i + 1);
		else
			ret += write(1, &format[i], 1);
	}
	va_end(tab->args);
	ret += tab->ret;
	free(tab);
	return (ret);
}
