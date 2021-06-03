/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:34:31 by lraffin           #+#    #+#             */
/*   Updated: 2021/06/03 16:22:43 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	main(void)
{
	int ret;
	
    printf("=============================================================\n");
    printf("                       PRINTF FLAGS                          \n");
    printf("=============================================================\n");
	ret = printf("It's a %0d test:\t", 42);
    printf("%d\n", ret);
    ret = printf("It's a %-d test:\t", 42);
    printf("%d\n", ret);
    ret = printf("It's a %42d test:\t", 42);
    printf("%d\n", ret);
    ret = printf("It's a %042d test:\t", 42);
    printf("%d\n", ret);
    ret = printf("It's a %-42d test:\t", 42);
    printf("%d\n", ret);
    ret = printf("It's a %.42d test:\t", 42);
    printf("%d\n", ret);
    ret = printf("It's a %-.42d test:\t", 42);
    printf("%d\n", ret);
    ret = printf("It's a %42.10d test:\t", 42);
    printf("%d\n", ret);
    ret = printf("It's a %-42.10d test:\t", 42);
    printf("%d\n", ret);
    ret = printf("It's a %-42.000003d test:\t", 42);
    printf("%d\n", ret);
    ret = printf("It's a %-42.d test:\t", 42);
    printf("%d\n", ret);
    ret = printf("It's a %*.10d test:\t", -21, 42);
    printf("%d\n", ret);
    ret = printf("It's a %42.*d test:\t", -21, 42);
    printf("%d\n", ret);
    ret = printf("It's a %*.*d test:\t", -21, -10, 42);
    printf("%d\n", ret);
    printf("=============================================================\n");
	return (0);
}