/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:42:35 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/10 11:42:59 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_parse_flags(const char *format, va_list args, int *count);
void	ft_check_format(const char *format, va_list args, int *count);

# endif