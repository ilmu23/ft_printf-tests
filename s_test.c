/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:07:48 by ivalimak          #+#    #+#             */
/*   Updated: 2024/05/02 12:40:29 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	stest(char *s)
{
	int		ret;

	printf("Starting string tests (s == \"%s\")\n\n", s);

	printf("%%s\n");
	ret = printf("%s", s);
	printf(".\t%d\n", ret);
	ret = ft_printf("%s", s);
	printf(".\t%d\n\n", ret);

	printf("%%s, s = NULL\n");
	ret = printf("%s", NULL);
	printf(".\t%d\n", ret);
	ret = ft_printf("%s", NULL);
	printf(".\t%d\n", ret);

	if (BONUS != 1)
		return ;

	printf("\n");
	sleep(1);
	printf("%%-s\n");
	ret = printf("%-s", s);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-s", s);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%4s\n");
	ret = printf("%4s", s);
	printf(".\t%d\n", ret);
	ret = ft_printf("%4s", s);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%*s, * = 6\n");
	ret = printf("%*s", 6, s);
	printf(".\t%d\n", ret);
	ret = ft_printf("%*s", 6, s);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%-4s\n");
	ret = printf("%-4s", s);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-4s", s);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%.4s\n");
	ret = printf("%.4s", s);
	printf(".\t%d\n", ret);
	ret = ft_printf("%.4s", s);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%.*s, * = 6\n");
	ret = printf("%.*s", 6, s);
	printf(".\t%d\n", ret);
	ret = ft_printf("%.*s", 6, s);
	printf(".\t%d\n\n", ret);
	
	sleep(1);
	printf("%%*.*s, *1 = 6, *2 = 4\n");
	ret = printf("%*.*s", 6, 4, s);
	printf(".\t%d\n", ret);
	ret = ft_printf("%*.*s", 6, 4, s);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%1s\n");
	ret = printf("%1s", s);
	printf(".\t%d\n", ret);
	ret = ft_printf("%1s", s);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%.1s\n");
	ret = printf("%.1s", s);
	printf(".\t%d\n", ret);
	ret = ft_printf("%.1s", s);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%-.1s\n");
	ret = printf("%-.1s", s);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-.1s", s);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%1s, s = \"\"\n");
	ret = printf("%1s", "");
	printf(".\t%d\n", ret);
	ret = ft_printf("%1s", "");
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%-1s, s = \"\"\n");
	ret = printf("%-1s", "");
	printf(".\t%d\n", ret);
	ret = ft_printf("%-1s", "");
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%.s, s = \"\"\n");
	ret = printf("%.s", "");
	printf(".\t%d\n", ret);
	ret = ft_printf("%.s", "");
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%.s, s = \"-\"\n");
	ret = printf("%.s", "-");
	printf(".\t%d\n", ret);
	ret = ft_printf("%.s", "-");
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%23s, s = NULL\n");
	ret = printf("%23s", NULL);
	printf(".\t%d\n", ret);
	ret = ft_printf("%23s", NULL);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%3.s, s = \"s_hidden\"\n");
	ret = printf("%3.s", "s_hidden");
	printf(".\t%d\n", ret);
	ret = ft_printf("%3.s", "s_hidden");
	printf(".\t%d\n", ret);
}
