/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:07:35 by ivalimak          #+#    #+#             */
/*   Updated: 2023/11/03 20:58:42 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"
#include <stdio.h>

void	ctest(char c)
{
	int		ret;

	printf("Starting char tests (c = %c)\n\n", c);

	printf("%%c\n");
	ret = printf("%c", c);
	printf(".\t%d\n", ret);
	ret = ft_printf("%c", c);
	printf(".\t%d\n", ret);

	if (BONUS != 1)
		return ;

	printf("\n");
	sleep(1);
	printf("%%-c\n");
	ret = printf("%-c", c);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-c", c);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%3c\n");
	ret = printf("%3c", c);
	printf(".\t%d\n", ret);
	ret = ft_printf("%3c", c);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%-3c\n");
	ret = printf("%-3c", c);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-3c", c);
	printf(".\t%d\n", ret);
}
