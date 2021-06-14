/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:42:40 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/14 14:19:06 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "libft/libft.h"

int	main(void)
{
	printf("RET_VALUE: %d\n", ft_printf("test -%010d- test\n", 42));
	printf("RET_VALUE: %d\n", printf("test -%010d- test\n", 42));
	return (0);
}
