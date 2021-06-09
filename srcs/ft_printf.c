/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 00:14:05 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/09 14:22:10 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

void	ft_parse_flags(const char *format, va_list args)
{
	if (*format == 'c')
		ft_putchar(va_arg(args, int));
	if (*format == 's')
		ft_putstr(va_arg(args, char *));
	if (*format == 'p')
		ft_puthexa(va_arg(args, unsigned long), "0123456789abcdef");
	if (*format == 'd' || *format == 'i')
		ft_putnbr(va_arg(args, int));
	if (*format == 'u')
		ft_putnbr_u(va_arg(args, unsigned int));
	if (*format == 'x')
		ft_putnbr_base(va_arg(args, int), "0123456789abcdef");
	if (*format == 'X')
		ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF");
	if (*format == '%')
		ft_putchar('%');
}

void	ft_check_format(const char *format, va_list args)
{
	while (*format)
	{
		if (*format == '%')
		{
			ft_parse_flags(format + 1, args);
			format++;
		}
		else
			ft_putchar(*format);
		format++;
	}
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	
	va_start(args, format);
	ft_check_format(format, args);
	va_end(args);
	return (0);
}