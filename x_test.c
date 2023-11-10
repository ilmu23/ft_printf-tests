/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:08:03 by ivalimak          #+#    #+#             */
/*   Updated: 2023/11/09 20:42:35 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
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

	sleep(1);
	printf("%%-60.32x, n = 0\n");
	ret = printf("%-60.32x", 0);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-60.32x", 0);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%#17.32x, n = 497376677\n");
	ret = printf("%#17.32x", 497376677);
	printf(".\t%d\n", ret);
	ret = ft_printf("%#17.32x", 497376677);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%#8.22x, n = 0\n");
	ret = printf("%#8.22x", 0);
	printf(".\t%d\n", ret);
	ret = ft_printf("%#8.22x", 0);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%#20.2x, n = -2005988151\n");
	ret = printf("%#20.2x", -2005988151);
	printf(".\t%d\n", ret);
	ret = ft_printf("%#20.2x", -2005988151);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%#42.36x, n = 926070024\n");
	ret = printf("%#42.36x", 926070024);
	printf(".\t%d\n", ret);
	ret = ft_printf("%#42.36x", 926070024);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%0#12x, n = 1524477320\n");
	ret = printf("%0#12x", 1524477320);
	printf(".\t%d\n", ret);
	ret = ft_printf("%0#12x", 1524477320);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf(" %%-4x , n = 4\n");
	ret = printf(" %-4x ", 4);
	printf(".\t%d\n", ret);
	ret = ft_printf(" %-4x ", 4);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf(" %%.0x , n = 0\n");
	ret = printf(" %.0x ", 0);
	printf(".\t%d\n", ret);
	ret = ft_printf(" %.0x ", 0);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf(" %%20.0x , n = 0x1234abcdu\n");
	ret = printf(" %20.0x ", 0x1234abcdu);
	printf(".\t%d\n", ret);
	ret = ft_printf(" %20.0x ", 0x1234abcdu);
	printf(".\t%d\n", ret);
}
