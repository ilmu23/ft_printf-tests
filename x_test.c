/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:08:03 by ivalimak          #+#    #+#             */
/*   Updated: 2023/11/03 21:04:12 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"
#include <stdio.h>

void	xtest(unsigned int n)
{
	int				ret;

	printf("Starting hex tests (n == %u)\n\n", n);

	printf("%%x\n");
	ret = printf("%x", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%x", n);
	printf(".\t%d\n\n", ret);

	printf("%%X\n");
	ret = printf("%X", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%X", n);
	printf(".\t%d\n", ret);


	if (BONUS != 1)
		return ;

	printf("\n");
	sleep(1);
	printf("%%-x\n");
	ret = printf("%-x", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-x", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%4x\n");
	ret = printf("%4x", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%4x", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%*X, * = 6\n");
	ret = printf("%*X", 6, n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%*X", 6, n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%-4X\n");
	ret = printf("%-4X", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-4X", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%04X\n");
	ret = printf("%04X", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%04X", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%.4x\n");
	ret = printf("%.4x", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%.4x", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%.*x, * = 6\n");
	ret = printf("%.*x", 6, n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%.*x", 6, n);
	printf(".\t%d\n\n", ret);
	
	sleep(1);
	printf("%%*.*x, *1 = 6, *2 = 4\n");
	ret = printf("%*.*x", 6, 4, n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%*.*x", 6, 4, n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%0*X, * = 6\n");
	ret = printf("%0*X", 6, n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%0*X", 6, n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%1X\n");
	ret = printf("%1X", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%1X", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%.1X\n");
	ret = printf("%.1X", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%.1X", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%-.1x\n");
	ret = printf("%-.1x", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-.1x", n);
	printf(".\t%d\n\n", ret);
}
