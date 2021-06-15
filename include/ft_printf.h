/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:46:36 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/15 18:39:02 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

typedef struct s_print
{
	va_list	args;
	int		width;
	int		precision;
	int		zero;
	int		dot;
	int		dash;
	int		length;
	int		ret;
}			t_print;

int		ft_printf(const char *format, ...);
void	ft_print_char(t_print *tab);
void	ft_print_string(t_print *tab);
void	ft_print_integer(t_print *tab);
void	ft_print_unsigned(t_print *tab);
void	ft_print_pointer(t_print *tab);
void	ft_print_hexa(t_print *tab, char c);
void	ft_update_width(t_print *tab);
void	ft_put_width(t_print *tab);
int		ft_dash(t_print *tab, const char *format, int pos);
int		ft_width(t_print *tab, const char *format, int pos);
int		ft_zero(t_print *tab, const char *format, int pos);
int		ft_star(t_print *tab, const char *format, int pos);
int		ft_dot(t_print *tab, const char *format, int pos);
t_print	*ft_reset_tab(t_print *tab);
t_print	*ft_init_tab(t_print *tab);

#endif
