/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:08:49 by ivalimak          #+#    #+#             */
/*   Updated: 2024/05/02 12:43:19 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>

# ifndef BONUS
#  define BONUS 0
# endif

int		ft_printf(const char *f, ...);

void	ctest(char c);
void	dtest(int n);
void	utest(unsigned int n);
void	stest(char *s);
void	xtest(unsigned int n);
void	ptest(void *p);

#endif
