/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choolau <choolau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 16:16:13 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/06 18:00:49 by choolau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper(char letter)
{
	if (letter < 'A' || letter > 'Z')
	{
		return (0);
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
		if (is_upper(*letter_ptr))
		{
			*letter_ptr += diff;
		}
		letter_ptr++;
	}
	return (str);
}
