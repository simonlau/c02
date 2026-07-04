/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choolau <choolau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 17:39:32 by choolau           #+#    #+#             */
/*   Updated: 2026/07/04 18:21:00 by choolau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*current_src_ptr;
	char	*current_dest_ptr;

	current_src_ptr = src;
	current_dest_ptr = dest;
	while (*current_src_ptr != '\0')
	{
		*current_dest_ptr = *current_src_ptr;
		current_src_ptr++;
		current_dest_ptr++;
		n--;
		if (n == 0)
		{
			return (dest);
		}
	}
	while (n > 0)
	{
		*current_dest_ptr = '\0';
		n--;
	}
	return (dest);
}
