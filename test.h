/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:08:49 by ivalimak          #+#    #+#             */
/*   Updated: 2023/11/10 12:08:29 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H
# include <stddef.h>
# include "ftprintf.h"

void	ctest(char c);
void	dtest(int n);
void	utest(unsigned int n);
void	stest(char *s);
void	xtest(unsigned int n);
void	ptest(void *p);

#endif
