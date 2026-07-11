#include <assert.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

void	test_empty(void)
{
	assert(strcmp(ft_strcapitalize(""), "") == 0);
}

void	test_simple(void)
{
	char	simon[] = "simon";
	char	two_words[] = "simon lau";
	char	all_caps[] = "SIMON";
	char	mixed[] = "SIMON laU";

	// printf("%s", ft_strcapitalize(simon));
	assert(strcmp(ft_strcapitalize(simon), "Simon") == 0);
	assert(strcmp(ft_strcapitalize(two_words), "Simon Lau") == 0);
	assert(strcmp(ft_strcapitalize(all_caps), "Simon") == 0);
	assert(strcmp(ft_strcapitalize(mixed), "Simon Lau") == 0);
}
void	test_more_spaces(void)
{
	char	simon[] = "  simon  ";
	char	two_words[] = " simon lau";

	// printf("%s\n%s\n", simon, ft_strcapitalize(simon));
	assert(strcmp(ft_strcapitalize(simon), "  Simon  ") == 0);
	assert(strcmp(ft_strcapitalize(two_words), " Simon Lau") == 0);
}

void	test_non_letters(void)
{
	char	mixed[] = "  s|Mon ? |aU ";

	// printf("%s", ft_strcapitalize(mixed));
	assert(strcmp(ft_strcapitalize(mixed), "  S|mon ? |au ") == 0);
}
int	main(void)
{
	test_empty();
	test_simple();
	test_more_spaces();
	test_non_letters();
}
