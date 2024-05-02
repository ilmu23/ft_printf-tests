/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:26:53 by ivalimak          #+#    #+#             */
/*   Updated: 2024/05/02 12:42:52 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	int		ret;
	char	*s;

	s = strdup("  test %");

	ret = printf(" %% ");
	printf(".\t%d\n", ret);
	ret = ft_printf(" %% ");
	printf(".\t%d\n\n", ret);

	ret = printf(s);
	printf(".\t%d\n", ret);
	ret = ft_printf(s);
	printf(".\t%d\n\n", ret);

	ret = printf("%break", NULL);
	printf(".\t%d\n", ret);
	ret = ft_printf("%break", NULL);
	printf(".\t%d\n\n", ret);

	if (BONUS == 1)
	{
		ret = printf("%5%");
		printf(".\t%d\n", ret);
		ret = ft_printf("%5%");
		printf(".\t%d\n\n", ret);
	}

	ctest('c');

	sleep(1);
	printf("\n");
	dtest(23);

	sleep(1);
	printf("\n");
	dtest(-23);

	sleep(1);
	printf("\n");
	utest(42);

	sleep(1);
	printf("\n");
	stest("Testing !");

	sleep(1);
	printf("\n");
	xtest(250);

	sleep(1);
	printf("\n");
	ptest(s);
	
	free(s);

	return (0);
}
