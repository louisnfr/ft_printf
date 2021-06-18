/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:42:40 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/18 19:44:48 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "include/libft.h"

int	main(void)
{
	char	*format = "-%0*.*i-";
	int		spec = 8;
	printf("%s\n", format);
	printf("\t| ret: %d\n", printf(format, 2, -2, spec));
	printf("\t| ret: %d\n", ft_printf(format, 2, -2, spec));
	return (0);
}
