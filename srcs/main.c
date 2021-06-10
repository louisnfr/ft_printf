/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:34:31 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/10 15:28:16 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

int	main(void)
{
	// char c = 5;
	
	ft_printf("my output: %d\n", ft_printf("This is a %x test\n", -1));
	printf("output: %d\n", printf("This is a %x test\n", -1));
	
	return (0);
}