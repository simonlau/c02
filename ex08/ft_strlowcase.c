/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 16:16:13 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/06 14:33:48 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	char	*letter_ptr;

	letter_ptr = str;
	while (*letter_ptr != '\0')
	{
		if (*letter_ptr < 'A' || *letter_ptr > 'Z')
		{
			return (0);
		}
		letter_ptr++;
	}
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int		diff;
	char	*letter_ptr;

	letter_ptr = str;
	diff = 'a' - 'A';
	while (*letter_ptr != '\0')
	{
		if (ft_str_is_uppercase(letter_ptr))
		{
			*letter_ptr += diff;
		}
		letter_ptr++;
	}
	return (str);
}
