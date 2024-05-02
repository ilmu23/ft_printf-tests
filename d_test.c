/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:07:27 by ivalimak          #+#    #+#             */
/*   Updated: 2024/05/02 12:40:08 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	dtest(int n)
{
	int	ret;

	printf("Starting int tests (n = %d)\n\n", n);

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
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("!%% 6.14d!, n = 19\n");
	ret = printf("!% 6.14d!", 19);
	printf(".\t%d\n", ret);
	ret = ft_printf("!% 6.14d!", 19);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("!%% 12.63d!, n = -1126107389\n");
	ret = printf("42% 12.63d42", -1126107389);
	printf(".\t%d\n", ret);
	ret = ft_printf("42% 12.63d42", -1126107389);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("\\\\!/%% 38.29d\\\\!/, n = -321176789\n");
	ret = printf("\\\\!/% 38.29d\\\\!/", -321176789);
	printf(".\t%d\n", ret);
	ret = ft_printf("\\\\!/% 38.29d\\\\!/", -321176789);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("\\\\!/%% .40d\\\\!/, n = 0\n");
	ret = printf("\\\\!/% .40d\\\\!/", 0);
	printf(".\t%d\n", ret);
	ret = ft_printf("\\\\!/% .40d\\\\!/", 0);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("\\\\!/%% .40d\\\\!/, n = 23\n");
	ret = printf("\\\\!/% .40d\\\\!/", 23);
	printf(".\t%d\n", ret);
	ret = ft_printf("\\\\!/% .40d\\\\!/", 23);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("\\\\!/%% .40d\\\\!/, n = -23\n");
	ret = printf("\\\\!/% .40d\\\\!/", -23);
	printf(".\t%d\n", ret);
	ret = ft_printf("\\\\!/% .40d\\\\!/", -23);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("\\\\!/%% .10d\\\\!/, n = -1947439042\n");
	ret = printf("\\\\!/% .10d\\\\!/", -1947439042);
	printf(".\t%d\n", ret);
	ret = ft_printf("\\\\!/% .10d\\\\!/", -1947439042);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("42%% .2d42, n = 0\n");
	ret = printf("42% .2d42", 0);
	printf(".\t%d\n", ret);
	ret = ft_printf("42% .2d42", 0);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("\\\\!/%% 13.2d\\\\!/, n = -1336802934\n");
	ret = printf("\\\\!/% 13.2d\\\\!/", -1336802934);
	printf(".\t%d\n", ret);
	ret = ft_printf("\\\\!/% 13.2d\\\\!/", -1336802934);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%% -24.60d, n = 0\n");
	ret = printf("% -24.60d", 0);
	printf(".\t%d\n", ret);
	ret = ft_printf("% -24.60d", 0);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%% -56.8d, n = -1285814664\n");
	ret = printf("% -56.8d", -1285814664);
	printf(".\t%d\n", ret);
	ret = ft_printf("% -56.8d", -1285814664);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%% -.2d, n = 0\n");
	ret = printf("% -.2d", 0);
	printf(".\t%d\n", ret);
	ret = ft_printf("% -.2d", 0);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%-.29d, n = 0\n");
	ret = printf("%-.29d", 0);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-.29d", 0);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%% -.52d, n = -1978464569\n");
	ret = printf("% -.52d", -1978464569);
	printf(".\t%d\n", ret);
	ret = ft_printf("% -.52d", -1978464569);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%% -.5d, n = -1978464569\n");
	ret = printf("% -.5d", -1978464569);
	printf(".\t%d\n", ret);
	ret = ft_printf("% -.5d", -1978464569);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%% 043d, n = 0\n");
	ret = printf("% 043d", 0);
	printf(".\t%d\n", ret);
	ret = ft_printf("% 043d", 0);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%% 050d, n = -751152680\n");
	ret = printf("% 050d", -751152680);
	printf(".\t%d\n", ret);
	ret = ft_printf("% 050d", -751152680);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%% -.10d, n = -1900603774\n");
	ret = printf("% -.10d", -1900603774);
	printf(".\t%d\n", ret);
	ret = ft_printf("% -.10d", -1900603774);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%% 0d, n = 0\n");
	ret = printf("% 0d", 0);
	printf(".\t%d\n", ret);
	ret = ft_printf("% 0d", 0);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%% 0d, n = 100764086\n");
	ret = printf("% 0d", 100764086);
	printf(".\t%d\n", ret);
	ret = ft_printf("% 0d", 100764086);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%.0d, n = 0\n");
	ret = printf("%.0d", 0);
	printf(".\t%d\n", ret);
	ret = ft_printf("%.0d", 0);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%5.0d, n = 0\n");
	ret = printf("%5.0d", 0);
	printf(".\t%d\n", ret);
	ret = ft_printf("%5.0d", 0);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("p6 %%.0d\\n, n = 100\n");
	ret = printf("p6 %.0d\n", 100);
	printf(".\t%d\n", ret);
	ret = ft_printf("p6 %.0d\n", 100);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%20.d, n = -1024\n");
	ret = printf("%20.d", -1024);
	printf(".\t%d\n", ret);
	ret = ft_printf("%20.d", -1024);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%.100d, n = INT_MIN\n");
	ret = printf("%.100d", INT_MIN);
	printf(".\t%d\n", ret);
	ret = ft_printf("%.100d", INT_MIN);
	printf(".\t%d\n\n", ret);

	sleep(1);
	printf("%%+5.0d, n = 0\n");
	ret = printf("%+5.0d", 0);
	printf(".\t%d\n", ret);
	ret = ft_printf("%+5.0d", 0);
	printf(".\t%d\n", ret);

	sleep(1);
	printf("%%-+100d, n = INT_MIN\n");
	ret = printf("%-+100d", INT_MIN);
	printf(".\t%d\n", ret);
	ret = ft_printf("%-+100d", INT_MIN);
	printf(".\t%d\n", ret);
}
