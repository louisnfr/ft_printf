/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:05:41 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/08 17:08:36 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_printhexa(unsigned long n, const char *base)
{
	if (n > 16)
	{
		ft_printhexa(n / 16, base);
		ft_printhexa(n % 16, base);
	}
	else
		write(1, &base[n], 1);
}
void	ft_puthexa(unsigned long n, const char *base)
{
	ft_putstr("0x");
	ft_printhexa(n, base);
}