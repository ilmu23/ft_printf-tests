/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:26:53 by ivalimak          #+#    #+#             */
/*   Updated: 2024/05/02 12:40:12 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ptest(void *p)
{
	int		ret;

	printf("Starting pointer tests\n\n");

	printf("%%p\n");
	ret = printf("%p", p);
	printf(".\t%d\n", ret);
	ret = ft_printf("%p", p);
	printf(".\t%d\n\n", ret);

	printf("%%p, p = NULL\n");
	ret = printf("%p", NULL);
	printf(".\t%d\n", ret);
	ret = ft_printf("%p", NULL);
	printf(".\t%d\n", ret);

	if (BONUS != 1)
		return ;

	printf("\n");
	sleep(1);
	printf("%%-p\n");
	ret = printf("%-p", p);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-p", p);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%4p\n");
	ret = printf("%4p", p);
	printf(".\t%d\n", ret);
	ret = ft_printf("%4p", p);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%*p, * = 25\n");
	ret = printf("%*p", 25, p);
	printf(".\t%d\n", ret);
	ret = ft_printf("%*p", 25, p);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%-20p\n");
	ret = printf("%-20p", p);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-20p", p);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%1p\n");
	ret = printf("%1p", p);
	printf(".\t%d\n", ret);
	ret = ft_printf("%1p", p);
	printf(".\t%d\n\n", ret);
}
