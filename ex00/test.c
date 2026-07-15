/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 17:22:49 by choolau           #+#    #+#             */
/*   Updated: 2026/07/16 00:49:33 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

void	test_normal(void)
{
	char	dest[] = "simon";
	char	*src;
	char	*result;

	src = "12345";
	result = ft_strcpy(dest, src);
	assert(strcmp(result, "12345") == 0);
}

void	test_src_empty(void)
{
	char	dest[] = "simon";
	char	*src;
	char	*result;

	src = "";
	result = ft_strcpy(dest, src);
	assert(strcmp(result, "") == 0);
}

void	test_dest_empty(void)
{
	char	dest[10] = "";
	char	*src;
	char	*result;

	src = "simon";
	result = ft_strcpy(dest, src);
	assert(strcmp(result, "simon") == 0);
}

int	main(void)
{
	test_normal();
	test_src_empty();
	test_dest_empty();
}
