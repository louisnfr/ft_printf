/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:42:40 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/14 22:54:50 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "include/libft.h"

int	main(void)
{
	printf("\t| ret: %d\n", ft_printf("-%010.8s-", "AOIFUAOIDFUAOIDFUOADFU"));
	printf("\t| ret: %d\n", printf("-%010.8s-", "AOIFUAOIDFUAOIDFUOADFU"));

	return (0);
}
