/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 09:48:03 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/05 16:40:52 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	char	*letter_ptr;

	letter_ptr = str;
	while (*letter_ptr != '\0')
	{
		if (*letter_ptr < ' ' || *letter_ptr > '~')
		{
			return (0);
		}
		letter_ptr++;
	}
	return (1);
}
