/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choolau <choolau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 17:22:49 by choolau           #+#    #+#             */
/*   Updated: 2026/07/04 17:34:35 by choolau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	a[] = "simon";
	char	b[] = "12345";
	char	*result;

	result = ft_strcpy(a, b);
	assert(strcmp(a, b) == 0);
}
