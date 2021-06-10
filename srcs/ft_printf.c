/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 00:14:05 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/10 15:58:12 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

void	ft_parse_flags(const char *format, va_list args, int *count)
{
	if (*format == 'c')
		*count += ft_putchar_ret(va_arg(args, int));
	if (*format == 's')
		*count += ft_putstr_ret(va_arg(args, char *));
	if (*format == 'p')
		*count += ft_put0xhexa_ret(va_arg(args, unsigned long), "0123456789abcdef");
	if (*format == 'd' || *format == 'i')
		*count += ft_putnbr_ret(va_arg(args, int));
	if (*format == 'u')
		*count += ft_putnbr_u_ret(va_arg(args, unsigned int));
	if (*format == 'x')
		*count += ft_puthexa_ret(va_arg(args, int), "0123456789abcdef");
	if (*format == 'X')
		*count += ft_puthexa_ret(va_arg(args, int), "0123456789ABCDEF");
	if (*format == '%')
		*count += ft_putchar_ret('%');
}

void	ft_check_format(const char *format, va_list args, int *count)
{
	while (*format)
	{
		if (*format == '%')
		{
			ft_parse_flags(format + 1, args, count);
			format++;
		}
		else
			*count += ft_putchar_ret(*format);
		format++;
	}
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int count;
	
	count = 0;
	va_start(args, format);
	ft_check_format(format, args, &count);
	va_end(args);
	return (count);
}