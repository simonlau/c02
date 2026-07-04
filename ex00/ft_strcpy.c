/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choolau <choolau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 17:16:26 by choolau           #+#    #+#             */
/*   Updated: 2026/07/04 17:35:05 by choolau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
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
	}
	*current_dest_ptr = '\0';
	return (dest);
}
