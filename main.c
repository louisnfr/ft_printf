/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:42:40 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/14 16:29:17 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "include/libft.h"

int	main(void)
{
	char p = 65;
	// printf("RET_VALUE: %d\n", ft_printf("test -%010d- test %c %%, %s\n", 42, 65, "oui"));
	// printf("RET_VALUE: %d\n", printf("test -%010d- test %c %%, %s\n", 42, 65, "oui"));
	
	ft_printf("-%16d-\n", -26);
	printf("-%16d-\n", -26);
	return (0);
}
