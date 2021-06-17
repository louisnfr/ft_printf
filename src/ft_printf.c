/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:19:39 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/17 18:09:47 by lraffin          ###   ########.fr       */
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
	tab->length = 0;
	tab->sign = 0;
	tab->ret = 0;
	return (tab);
}

t_print	*ft_reset_tab(t_print *tab)
{
	tab->width = 0;
	tab->precision = 0;
	tab->zero = 0;
	tab->dot = 0;
	tab->dash = 0;
	tab->length = 0;
	tab->sign = 0;
	return (tab);
}

int	ft_convert(t_print *tab, const char *format, int pos)
{
	if (format[pos] == 'c')
		ft_print_char(tab);
	if (format[pos] == 's')
		ft_print_string(tab);
	if (format[pos] == 'p')
		ft_print_pointer(tab);
	if (format[pos] == 'd' || *format == 'i')
		ft_print_integer(tab);
	if (format[pos] == 'u')
		ft_print_unsigned(tab);
	if (format[pos] == 'x')
		ft_print_hexa(tab, 'x');
	if (format[pos] == 'X')
		ft_print_hexa(tab, 'X');
	if (format[pos] == '%')
		tab->ret += write(1, "%", 1);
	return (pos);
}

int	ft_check_format(t_print *tab, const char *format, int pos)
{
	while (!ft_isflag(format[pos]))
	{
		if (format[pos] == '-')
			pos = ft_dash(tab, format, pos);
		if (format[pos] == '.')
			pos = ft_dot(tab, format, pos);
		if (format[pos] == '0')
			pos = ft_zero(tab, format, pos);
		if (format[pos] == '*')
			pos = ft_star(tab, format, pos);
		if (ft_isdigit(format[pos]))
			pos = ft_width(tab, format, pos);
	}
	ft_convert(tab, format, pos);
	ft_reset_tab(tab);
	return (pos);
}

int	ft_printf(const char *format, ...)
{
	t_print	*tab;
	int		ret;
	int		i;

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
