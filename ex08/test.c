#include <assert.h>
#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

void	test_all_lower(void)
{
	char	lower[] = "abcdefghijklmnopqrstuvwxyz";
	char	*expected;
	char	*result;

	expected = "abcdefghijklmnopqrstuvwxyz";
	result = ft_strlowcase(lower);
	assert(strcmp(result, expected) == 0);
}

void	test_empty(void)
{
	char	empty[] = "";
	char	*result;

	result = ft_strlowcase(empty);
	assert(strlen(result) == 0);
}

void	test_mixed(void)
{
	char	input[] = "AAaaAA";
	char	*expected;
	char	*result;

	expected = "aaaaaa";
	result = ft_strlowcase(input);
	assert(strcmp(result, expected) == 0);
}

void	test_all_upper(void)
{
	char	input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	*expected;
	char	*result;

	expected = "abcdefghijklmnopqrstuvwxyz";
	result = ft_strlowcase(input);
	assert(strcmp(result, expected) == 0);
}

void	test_nonalpha(void)
{
	char	input[] = "-?*";
	char	*expected;
	char	*result;

	expected = "-?*";
	result = ft_strlowcase(input);
	assert(strcmp(result, expected) == 0);
}

int	main(void)
{
	test_all_lower();
	test_empty();
	test_all_upper();
	test_nonalpha();
	test_mixed();
	return (0);
}
