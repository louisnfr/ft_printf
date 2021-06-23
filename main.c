/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:42:40 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/22 19:15:09 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "include/libft.h"

int	main(void)
{
	char	*format = "-%5 dsdfsdfsdf-";
	int		spec = 5;
	// char	*spec = NULL;
	// printf("%s\n", format);
	printf("\t| ret: %d\n", printf(format));
	printf("\t| ret: %d\n", ft_printf(format));
	return (0);
}
