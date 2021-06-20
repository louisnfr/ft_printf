/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:42:40 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/20 02:13:58 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "include/libft.h"

int	main(void)
{
	char	*format = "-%-2s--%.s--%-4s--%-2.4s--%-8.12s--%3s--%8s--%---2s--%.18s--%.0s--%.1s--%.2s--%.4s--%.8s-";
	char	*spec = NULL;
	printf("%s\n", format);
	printf("\t| ret: %d\n", printf(format, spec, spec, spec, spec, spec, spec, spec, spec, spec, spec, spec, spec, spec, spec));
	printf("\t| ret: %d\n", ft_printf(format, spec, spec, spec, spec, spec, spec, spec, spec, spec, spec, spec, spec, spec, spec));
	return (0);
}
