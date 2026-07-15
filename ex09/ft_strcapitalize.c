/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 10:31:41 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/11 14:26:20 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0
#define SPACE ' '

static int	is_lower(char c)
{
	if (c < 'a')
	{
		return (FALSE);
	}
	else if (c > 'z')
	{
		return (FALSE);
	}
	return (TRUE);
}

static int	is_upper(char c)
{
	if (c < 'A')
	{
		return (FALSE);
	}
	else if (c > 'Z')
	{
		return (FALSE);
	}
	return (TRUE);
}

static void	change_to_correct_case(char *letter_ptr, char c)
{
	int	diff;

	diff = 'a' - 'A';
	if (c == 'U')
	{
		if (is_lower(*letter_ptr))
		{
			*letter_ptr -= diff;
		}
	}
	else if (c == 'L')
	{
		if (is_upper(*letter_ptr))
		{
			*letter_ptr += diff;
		}
	}
}

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		in_word;
	char	*letter_ptr;

	letter_ptr = str;
	if (is_lower(*letter_ptr) || is_upper(*letter_ptr))
	{
		in_word = TRUE;
		change_to_correct_case(letter_ptr, 'U');
		letter_ptr++;
	}
	while (*letter_ptr)
	{
		if (in_word && (is_upper(*letter_ptr) || is_lower(*letter_ptr)))
			change_to_correct_case(letter_ptr, 'L');
		else if (*letter_ptr == SPACE)
			in_word = FALSE;
		else if (!in_word)
		{
			change_to_correct_case(letter_ptr, 'U');
			in_word = TRUE;
		}
		letter_ptr++;
	}
	return (str);
}
