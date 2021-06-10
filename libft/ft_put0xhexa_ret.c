/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put0xhexa_ret.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:05:41 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/10 18:09:39 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print0xhexa(unsigned long n, const char *base, int *count)
{
	if (n > 16)
	{
		ft_print0xhexa(n / 16, base, count);
		ft_print0xhexa(n % 16, base, count);
	}
	else
		*count += write(1, &base[n], 1);
}

int	ft_put0xhexa_ret(unsigned long n, const char *base)
{
	int	count;

	count = 0;
	count += ft_putstr_ret("0x");
	ft_print0xhexa(n, base, &count);
	return (count);
}
