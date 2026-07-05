/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 17:39:32 by choolau           #+#    #+#             */
/*   Updated: 2026/07/05 16:44:35 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	if (n <= 0)
	{
		return (dest);
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		n--;
		if (n == 0)
		{
			return (dest);
		}
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (dest);
}
