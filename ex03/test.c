/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 09:36:19 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/05 10:12:15 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>

int		ft_str_is_numeric(char *str);

void	test_only_lowercase(void)
{
	char	*s;
	int		result;

	s = "0123456789";
	result = ft_str_is_numeric(s);
	assert(1 == result);
}

void	test_invalid(void)
{
	char	*s;
	int		result;

	s = "012345 6789";
	result = ft_str_is_numeric(s);
	assert(0 == result);
}

void	test_empty(void)
{
	char	*s;
	int		result;

	s = "";
	result = ft_str_is_numeric(s);
	assert(1 == result);
}

int	main(void)
{
	test_only_lowercase();
	test_invalid();
	test_empty();
}