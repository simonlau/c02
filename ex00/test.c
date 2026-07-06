/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choolau <choolau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 17:22:49 by choolau           #+#    #+#             */
/*   Updated: 2026/07/06 20:42:00 by choolau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[] = "simon";
	char	src[] = "12345";
	char	*result;
	char	*expected;

	expected = "12345";
	result = ft_strcpy(dest, src);
	assert(strcmp(result, expected) == 0);
}
