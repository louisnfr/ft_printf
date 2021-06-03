/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 00:14:05 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/03 17:48:24 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	ft_parse_flags(const char *format)
{
	printf("string received: %s\n", format);
}

char	ft_check_format(const char *format)
{
	size_t	i;

	i = -1;
	while (format[++i])
		if (format[i] == '%')
			ft_parse_flags(format + i + 1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	ft_check_format(format);
	ft_putstr(format);
	return (0);
}