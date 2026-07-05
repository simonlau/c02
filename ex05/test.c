/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 09:48:10 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/05 10:13:16 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>

int		ft_str_is_uppercase(char *str);

void	test_only_uppercase(void)
{
	char	*s;
	int		result;

	s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	result = ft_str_is_uppercase(s);
	assert(1 == result);
}

void	test_invalid(void)
{
	char	*s;
	int		result;

	s = "ABCDEFGHIJKLpMNOPQRSTUVWXYZ";
	result = ft_str_is_uppercase(s);
	assert(0 == result);
}

void	test_empty(void)
{
	char	*s;
	int		result;

	s = "";
	result = ft_str_is_uppercase(s);
	assert(1 == result);
}

int	main(void)
{
	test_only_uppercase();
	test_invalid();
	test_empty();
}