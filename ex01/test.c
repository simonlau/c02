/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 17:39:58 by choolau           #+#    #+#             */
/*   Updated: 2026/07/04 22:52:06 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
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
		assert(b[i] == 'X');
}


void	test_n_smaller(void)
{
	char	a[] = "simon";
	char	b[10];
	char	*result;
	char	expected[] = "si";
	int		small;

	small = 2;
	result = ft_strncpy(b, a, small);
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

	result = ft_strncpy(b, a, strlen(a));
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

	result = ft_strncpy(b, a, sizeof(a));
	for (int i = 0; i < (int)sizeof(a); i++)
	{
		assert(result[i] == expected[i]);
	}
}

// void	test_n_large(void)
// {
// 	char	a[] = "simon";
// 	char	b[10];
// 	char	*result;
// 	char	expected[] = "simon";

// 	result = ft_strncpy(b, a, sizeof(a));
// 	for (int i = 0; i < (int)sizeof(a); i++)
// 	{
// 		assert(result[i] == expected[i]);
// 	}
// 	for (int i = (int)sizeof(a); i < 10; i++)
// 	{
// 		assert(result[i] == '\0');
// 	}
// }

int	main(void)
{
	test_n_zero();
	test_n_smaller();
	test_n_equal_sizeof();
	test_n_equal_strlen();
	// test_n_large();
}
