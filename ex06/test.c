/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 09:48:10 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/05 10:54:32 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>

int		ft_str_is_printable(char *str);

void	test_only_printable(void)
{
	char	*s;
	int		result;

	s = "!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
	result = ft_str_is_printable(s);
	assert(1 == result);
}

void	test_invalid(void)
{
	char	*s;
	int		result;

	// man ascii
	// printf "%o" 127
	s = "a\177b\nc";
	result = ft_str_is_printable(s);
	assert(0 == result);
}

void	test_empty(void)
{
	char	*s;
	int		result;

	s = "";
	result = ft_str_is_printable(s);
	assert(1 == result);
}

int	main(void)
{
	test_only_printable();
	test_invalid();
	test_empty();
}