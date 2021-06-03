/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 00:14:05 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/03 16:40:14 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	ft_parse_flags(const char *str)
{
	printf("string received: %s\n", str);
}

char	ft_check_format(const char *str)
{
	size_t	i;

	i = -1;
	while (str[++i])
		if (str[i] == '%')
			ft_parse_flags(str + i + 1);
	return (0);
}

int	ft_printf(const char *input, ...)
{
	ft_check_format(input);
	ft_putstr(input);
	return (0);
}