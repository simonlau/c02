/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 23:10:37 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/05 16:42:50 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	char	*current_letter_ptr;

	current_letter_ptr = str;
	if (*current_letter_ptr == '\0')
	{
		return (1);
	}
	while (*current_letter_ptr != '\0')
	{
		if (*current_letter_ptr < 'A')
		{
			return (0);
		}
		else if (*current_letter_ptr > 'Z' && *current_letter_ptr < 'a')
		{
			return (0);
		}
		else if (*current_letter_ptr > 'z')
		{
			return (0);
		}
		current_letter_ptr++;
	}
	return (1);
}
