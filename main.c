/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:34:31 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/06 20:12:00 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	main(void)
{
	char a = 65;
	
	ft_printf("p: %p\n", &a);
	printf("p: %p\n", &a);
	printf("p: %x\n", 180);
	printf("p: %X\n", 180);
	
	return (0);
}