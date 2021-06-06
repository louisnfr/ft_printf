/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 00:14:05 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/06 19:00:50 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	ft_parse_flags(const char *format, size_t i, va_list p)
{
	// flags : -0.*
	
	// arguments : cspdiuxX
	if (format[i] == 'c')
		ft_putchar((char)va_arg(p, int));
	if (format[i] == 's')
		ft_putstr((char *)va_arg(p, char *));
	if (format[i] == 'p')
		ft_putstr(va_arg(p, void *));
	if (format[i] == 'd' || format[i] == 'i')
		ft_putnbr((int)va_arg(p, int));
}

char	ft_check_format(const char *format, va_list p)
{
	size_t	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_parse_flags(format, i + 1, p);
			i++;
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list param;
	va_start(param, format);
	ft_check_format(format, param);
	return (0);
}