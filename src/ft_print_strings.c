/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_strings.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 16:33:03 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/15 18:40:10 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

void	ft_print_char(t_print *tab)
{
	char	c;

	c = va_arg(tab->args, int);
	tab->length = 1;
	ft_update_width(tab);
	if (tab->width && !tab->dash)
		ft_put_width(tab);
	tab->ret += write(1, &c, 1);
	if (tab->width && tab->dash)
		ft_put_width(tab);
}

void	ft_print_string(t_print *tab)
{
	char	*s;
	
	s = va_arg(tab->args, char *);
	if (!s)
		s = "(null)";
	tab->length = ft_strlen(s);
	ft_update_width(tab);
	if (tab->dot && (tab->precision < tab->length))
		tab->length = tab->precision;
	if ((tab->width > tab->length) && !tab->dash)
		ft_put_width(tab);
	tab->ret += ft_putstr_n_ret(s, tab->length);
	if (tab->width && tab->dash)
		ft_put_width(tab);
}
