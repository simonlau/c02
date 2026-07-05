/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 09:48:10 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/05 10:12:15 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>

int		ft_str_is_lowercase(char *str);

void	test_only_lowercase(void)
{
	char	*s;
	int		result;

	s = "abcdefghijklmnopqrstuvwxyz";
	result = ft_str_is_lowercase(s);
	assert(1 == result);
}

void	test_invalid(void)
{
	char	*s;
	int		result;

	s = "abcdefghijkl5mnopqrstuvwxyz";
	result = ft_str_is_lowercase(s);
	assert(0 == result);
}

void	test_empty(void)
{
	char	*s;
	int		result;

	s = "";
	result = ft_str_is_lowercase(s);
	assert(1 == result);
}

int	main(void)
{
	test_only_lowercase();
	test_invalid();
	test_empty();
}