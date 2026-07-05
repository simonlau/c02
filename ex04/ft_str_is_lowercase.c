/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 09:48:03 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/05 09:48:52 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	char *letter_ptr = str;

	while (*letter_ptr != '\0')
	{
		if (*letter_ptr < 'a' || *letter_ptr > 'z')
		{
			return (0);
		}
		letter_ptr++;
	}
	return (1);
}