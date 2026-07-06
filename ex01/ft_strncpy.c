/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 17:39:32 by choolau           #+#    #+#             */
/*   Updated: 2026/07/06 10:51:23 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*dest_letter_ptr;

	dest_letter_ptr = dest;
	if (n <= 0)
	{
		return (dest);
	}
	while (*src != '\0')
	{
		*dest_letter_ptr = *src;
		src++;
		dest_letter_ptr++;
		n--;
		if (n <= 0)
		{
			return (dest);
		}
	}
	while (n > 0)
	{
		*dest_letter_ptr = '\0';
		dest_letter_ptr++;
		n--;
	}
	return (dest);
}
