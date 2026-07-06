/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choolau <choolau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 16:16:13 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/06 17:57:37 by choolau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase(char letter)
{
	if (letter < 'a' || letter > 'z')
	{
		return (0);
	}
	return (1);
}

char	*ft_strupcase(char *str)
{
	int		diff;
	char	*letter_ptr;

	letter_ptr = str;
	diff = 'a' - 'A';
	while (*letter_ptr != '\0')
	{
		if (is_lowercase(*letter_ptr))
		{
			*letter_ptr -= diff;
		}
		letter_ptr++;
	}
	return (str);
}
