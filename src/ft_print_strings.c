/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_strings.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 16:33:03 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/14 23:18:24 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

void	ft_print_char(t_print *tab)
{
	char	c;

	c = va_arg(tab->args, int);
	tab->length = 1;
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
	tab->length = ft_strlen(s);
	if (tab->maximal < tab->length)
		tab->length = tab->maximal;
	if (tab->width && !tab->dash)
		ft_put_width(tab);
	tab->ret += ft_putstr_n_ret(s, tab->length);
	if (tab->width && tab->dash)
		ft_put_width(tab);
}
