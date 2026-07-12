/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 09:48:10 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/12 15:57:26 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>

int		ft_str_is_printable(char *str);

void	test_only_printable(void)
{
	char	*s;

	s = "!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
	assert(1 == ft_str_is_printable(s));
	assert(1 == ft_str_is_printable("s"));
}

void	test_invalid(void)
{
	// man ascii
	// printf "%o" 127
	assert(0 == ft_str_is_printable("a\177b\nc"));
	assert(0 == ft_str_is_printable("\t"));
}

void	test_empty(void)
{
	assert(1 == ft_str_is_printable(""));
}

int	main(void)
{
	test_only_printable();
	test_invalid();
	test_empty();
}
