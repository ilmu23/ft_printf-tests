/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:07:21 by ivalimak          #+#    #+#             */
/*   Updated: 2023/11/09 20:20:30 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>

void	utest(unsigned int n)
{
	int				ret;

	printf("Starting uint tests (n == %u)\n\n", n);

	printf("%%u\n");
	ret = printf("%u", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%u", n);
	printf(".\t%d\n", ret);

	if (BONUS != 1)
		return ;

	printf("\n");
	sleep(1);
	printf("%%-u\n");
	ret = printf("%-u", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-u", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%4u\n");
	ret = printf("%4u", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%4u", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%*u, * = 6\n");
	ret = printf("%*u", 6, n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%*u", 6, n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%-4u\n");
	ret = printf("%-4u", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-4u", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%04u\n");
	ret = printf("%04u", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%04u", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%.4u\n");
	ret = printf("%.4u", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%.4u", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%.*u, * = 6\n");
	ret = printf("%.*u", 6, n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%.*u", 6, n);
	printf(".\t%d\n\n", ret);
	
	sleep(1);
	printf("%%*.*u, *1 = 6, *2 = 4\n");
	ret = printf("%*.*u", 6, 4, n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%*.*u", 6, 4, n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%0*u, * = 6\n");
	ret = printf("%0*u", 6, n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%0*u", 6, n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%1u\n");
	ret = printf("%1u", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%1u", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%.1u\n");
	ret = printf("%.1u", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%.1u", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%-.1u\n");
	ret = printf("%-.1u", n);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-.1u", n);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%.0u, n = 0\n");
	ret = printf("%.0u", 0);
	printf(".\t%d\n", ret);
	ret = ft_printf("%.0u", 0);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%.u, n = 0\n");
	ret = printf("%.u", 0);
	printf(".\t%d\n", ret);
	ret = ft_printf("%.u", 0);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%-62.19u, n = 0\n");
	ret = printf("%-62.19u", 0);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-62.19u", 0);
	printf(".\t%d\n", ret);
}
