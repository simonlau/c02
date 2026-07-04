/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choolau <choolau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 17:39:58 by choolau           #+#    #+#             */
/*   Updated: 2026/07/04 18:39:21 by choolau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>

char	*ft_strncpy(char *dest, const char *src, unsigned int n);

void	test_n_smaller(void)
{
	char	a[] = "simon";
	char	b[10];
	char	*result;
	char	expected[] = "si";
	int		small;

	small = 2;
	result = ft_strncpy(a, b, small);
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

	result = ft_strncpy(a, b, strlen(a));
	for (int i = 0; i < (int)strlen(a); i++)
	{
		assert(result[i] == expected[i]);
	}
}

void	test_n_equal_sizeof(void)
{
	char	a[] = "simon";
	char	b[10];
	char	*result;
	char	expected[] = "simon";

	result = ft_strncpy(a, b, sizeof(a));
	for (int i = 0; i < (int)sizeof(a); i++)
	{
		assert(result[i] == expected[i]);
	}
}

void	test_n_large(void)
{
	char	a[] = "simon";
	char	b[10];
	char	*result;
	char	expected[] = "simon";

	result = ft_strncpy(a, b, sizeof(a));
	for (int i = 0; i < (int)sizeof(a); i++)
	{
		assert(result[i] == expected[i]);
	}
	for (int i = (int)sizeof(a); i < 10; i++)
	{
		assert(result[i] == '\0');
	}
}

int	main(void)
{
	test_n_smaller();
	test_n_equal_sizeof();
	test_n_equal_strlen();
	test_n_large();
}
