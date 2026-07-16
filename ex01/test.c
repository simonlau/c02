/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 17:39:58 by choolau           #+#    #+#             */
/*   Updated: 2026/07/16 14:14:12 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, const char *src, unsigned int n);

void	test_n_zero(void)
{
	char	a[] = "simon";
	char	b[10];
	char	*result;

	memset(b, 'X', 10);
	result = ft_strncpy(b, a, 0);
	assert(result == b);
	for (int i = 0; i < 10; i++)
	{
		assert(b[i] == 'X');
	}
}

void	test_n_smaller(void)
{
	char	a[] = "simon";
	char	b[10];
	char	*result;
	int		small;
	char	expected[] = "si";

	small = 2;
	result = ft_strncpy(b, a, small);
	assert(result == b);
	for (int i = 0; i < small; i++)
	{
		assert(result[i] == expected[i]);
	}
}

void	test_n_equal_strlen(void)
{
	char	a[] = "simon";
	char	b[10];
	char	*result;
	char	expected[] = "simon";
	int		len;

	memset(b, 'X', 10);
	len = strlen(a);
	result = ft_strncpy(b, a, len);
	assert(result == b);
	for (int i = 0; i < len; i++)
	{
		assert(result[i] == expected[i]);
	}
	for (int i = len; i < 10; i++)
	{
		assert(result[i] == 'X');
	}
}

void	test_n_large(void)
{
	char	*a;
	char	b[10];
	char	*result;
	char	expected[] = "simon";
	int		size;
	int		MAX;

	a = "simon";
	size = strlen(a);
	MAX = 10;
	for (int i = 0; i < MAX; i++)
	{
		b[i] = '?';
	}
	result = ft_strncpy(b, a, MAX);
	assert(result == b);
	for (int i = 0; i < size; i++)
	{
		assert(result[i] == expected[i]);
	}
	for (int i = size; i < MAX; i++)
	{
		assert(result[i] == '\0');
	}
}

int	main(void)
{
	test_n_zero();
	test_n_smaller();
	test_n_equal_strlen();
	test_n_large();
}
