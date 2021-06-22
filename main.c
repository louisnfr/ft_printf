/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:42:40 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/22 18:35:19 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "include/libft.h"

int	main(void)
{
	char	*format = "-%*.*d-";
	int		spec = 5;
	// char	*spec = NULL;
	// printf("%s\n", format);
	printf("\t| ret: %d\n", printf(format, 10, 2, spec));
	printf("\t| ret: %d\n", ft_printf(format, 10, 2, spec));
	return (0);
}
