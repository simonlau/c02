/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 09:36:07 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/05 16:42:30 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	char	*letter_ptr;

	letter_ptr = str;
	while (*letter_ptr != '\0')
	{
		if (*letter_ptr < '0' || *letter_ptr > '9')
		{
			return (0);
		}
		letter_ptr++;
	}
	return (1);
}
