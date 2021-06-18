/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alignment.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 14:27:21 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/18 19:51:34 by lraffin          ###   ########.fr       */
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
	while (!tab->zero && tab->width-- > 0)
		tab->ret += write(1, " ", 1);
	while (tab->zero && tab->width-- > 0)
		tab->ret += write(1, "0", 1);
}

void ft_update_width_int(t_print *tab)
{
	if (tab->precision < 0)
		tab->precision *= -1;
	if (tab->dash || tab->dot)
		tab->zero = 0;
	if (tab->width < 0)
	{
		tab->width *= -1;
		tab->dash = 1;
	}
	if (tab->dot)
	{
		if (tab->length <= tab->precision)
			tab->width -= tab->precision + tab->sign;
		else if (tab->length > tab->precision)
			tab->width -= tab->length + tab->sign;
		else if (tab->width <= tab->length || tab->width <= tab->precision)
			tab->width = 0;
	}
	else
		tab->width -= tab->length + tab->sign;
	// printf("width: %d\n", tab->width);
}

void ft_put_width_int(t_print *tab)
{
	while (!tab->zero && tab->width-- > 0)
		tab->ret += write(1, " ", 1);
	while (tab->zero && tab->width-- > 0)
		tab->ret += write(1, "0", 1);
}

void ft_put_spaces_int(t_print *tab)
{
	while (tab->width-- > 0)
		tab->ret += write(1, " ", 1);
}
