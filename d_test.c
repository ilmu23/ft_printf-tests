/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:07:27 by ivalimak          #+#    #+#             */
/*   Updated: 2023/11/05 18:44:47 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"
#include <stdio.h>

void	dtest(int n)
{
	int	ret;

	printf("Starting int tests (n == %d)\n\n", n);

	printf("%%d\n");
	ret = printf("%d", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%d", n);
	printf(".\t%d\n", ret);

	if (BONUS != 1)
		return ;

	printf("\n");
	sleep(1);
	printf("%%-d\n");
	ret = printf("%-d", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-d", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%4d\n");
	ret = printf("%4d", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%4d", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%*d, * = 6\n");
	ret = printf("%*d", 6, n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%*d", 6, n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%-4d\n");
	ret = printf("%-4d", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-4d", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%04d\n");
	ret = printf("%04d", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%04d", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%.4d\n");
	ret = printf("%.4d", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%.4d", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%.*d, * = 6\n");
	ret = printf("%.*d", 6, n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%.*d", 6, n);
	printf(".\t%d\n\n", ret);
	
	sleep(1);
	printf("%%*.*d, *1 = 6, *2 = 4\n");
	ret = printf("%*.*d", 6, 4, n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%*.*d", 6, 4, n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%0*d, * = 6\n");
	ret = printf("%0*d", 6, n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%0*d", 6, n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%1d\n");
	ret = printf("%1d", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%1d", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%.1d\n");
	ret = printf("%.1d", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%.1d", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%-.1d\n");
	ret = printf("%-.1d", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-.1d", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%-8.5d\n");
	ret = printf("%-8.5d", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-8.5d", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%% 52.42d, n = 0\n");
	ret = printf("% 52.42d", 0);
	printf(".\t%d\n", ret);
	ret = ft_printf("% 52.42d", 0);
	printf(".\t%d\n", ret);
}
