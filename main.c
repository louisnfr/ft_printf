/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:42:40 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/14 17:56:27 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "include/libft.h"

int	main(void)
{
	printf("RET_VALUE: %d\n", ft_printf("test -%010d- test %c %%, %s, %u\n", 42, 65, "oui", -98));
	printf("RET_VALUE: %d\n", printf("test -%010d- test %c %%, %s, %u\n", 42, 65, "oui", -98));
	
	return (0);
}
