/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:42:40 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/21 17:05:36 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "include/libft.h"

int	main(void)
{
	// char	*format = "-%.p-";
	// int		spec = 15;
	// char	*spec = NULL;
	// printf("%s\n", format);
	printf("\t| ret: %d\n", printf("%0*.20%", -10));
	printf("\t| ret: %d\n", ft_printf("%0*.20%", -10));
	return (0);
}
