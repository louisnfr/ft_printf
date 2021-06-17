/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 18:23:50 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/17 18:28:42 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

void	ft_weird(t_print *tab)
{
	if (tab->width < 0)
		tab->width *= -1;
	while (tab->width-- > 0)
		tab->ret += write(1, " ", 1);
}
