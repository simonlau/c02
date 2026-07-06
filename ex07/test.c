#include <assert.h>
#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

void	test_all_lower(void)
{
	char	lower[] = "abcdefghijklmnopqrstuvwxyz";
	char	*upper;
	char	*result;

	upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	result = ft_strupcase(lower);
	assert(strcmp(result, upper) == 0);
}

void	test_empty(void)
{
	char	empty[] = "";
	char	*result;

	result = ft_strupcase(empty);
	assert(strlen(result) == 0);
}

void	test_all_upper(void)
{
	char	input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	*upper;
	char	*result;

	upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	result = ft_strupcase(input);
	assert(strcmp(result, upper) == 0);
}

void	test_mixed(void)
{
	char	input[] = "AAaaAA";
	char	*expected;
	char	*result;

	expected = "AAAAAA";
	result = ft_strupcase(input);
	assert(strcmp(result, expected) == 0);
}

void	test_nonalpha(void)
{
	char	input[] = "-?*";
	char	*expected;
	char	*result;

	expected = "-?*";
	result = ft_strupcase(input);
	assert(strcmp(result, expected) == 0);
}

int	main(void)
{
	test_empty();
	test_all_lower();
	test_all_upper();
	test_nonalpha();
	test_mixed();
	return (0);
}
