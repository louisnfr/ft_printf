/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alignment.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 14:27:21 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/15 19:05:33 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

void ft_update_width(t_print *tab)
{
	if (tab->width < 0)
	{
		tab->width *= -1;
		tab->dash = 1;
	}
	if (tab->precision < 0)
	{
		tab->precision = 0;
		tab->dot = 0;
	}
}

void ft_put_width(t_print *tab)
{
	tab->width -= tab->length;
	while (!tab->zero && tab->width--)
		tab->ret += write(1, " ", 1);
	while (tab->zero && tab->width--)
		tab->ret += write(1, "0", 1);
}
