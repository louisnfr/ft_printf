/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 00:14:05 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/08 12:23:43 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	ft_parse_flags(const char *format, va_list p)
{
	// flags : -0.*
	
	// arguments : cspdiuxX
	if (*format == 'c')
		ft_putchar((char)va_arg(p, int));
	if (*format == 's')
		ft_putstr((char *)va_arg(p, char *));
	if (*format == 'p')
	{
		ft_putstr("0x");
		ft_putnbr_base(va_arg(p, unsigned long int), "0123456789abcdef");
	}
	if (*format == 'd' || *format == 'i')
		ft_putnbr((int)va_arg(p, int));
	if (*format == 'u')
		ft_putnbr((unsigned int)va_arg(p, unsigned int));
	if (*format == 'x')
		ft_putnbr_base((int)va_arg(p, int), "0123456789abcdef");
	if (*format == 'X')
		ft_putnbr_base((int)va_arg(p, int), "0123456789ABCDEF");
	if (*format == '%')
		ft_putchar('%');
}

char	ft_check_format(const char *format, va_list p)
{
	while (*format)
	{
		if (*format == '%')
		{
			ft_parse_flags(format + 1, p);
			format++;
		}
		else
			ft_putchar(*format);
		format++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list param;
	va_start(param, format);
	ft_check_format(format, param);
	va_end(param);
	return (0);
}