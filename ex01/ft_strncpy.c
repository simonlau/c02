/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 17:39:32 by choolau           #+#    #+#             */
/*   Updated: 2026/07/04 22:46:27 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	if (n <= 0) {
		return dest;
	}
	
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
		current_dest_ptr++;
		n--;
	}
	return (dest);
}
