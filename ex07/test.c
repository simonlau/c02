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
	assert(strcasecmp(result, upper));
}

void	test_empty(void)
{
	char	empty[] = "";
	char	*result;

	result = ft_strupcase(empty);
	printf("%s", result);
	assert(strlen(result) == 0);
}

void	test_all_upper(void)
{
	char	input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	*upper;
	char	*result;

	upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	result = ft_strupcase(input);
	assert(strcasecmp(result, upper));
}

void	test_nonalpha(void)
{
	char	input[] = "-?*";
	char	*expected;
	char	*result;

	expected = "-?*";
	result = ft_strupcase(input);
	assert(strcasecmp(result, expected));
}

int	main(void)
{
	test_all_lower();
	test_empty();
	test_all_upper();
	test_nonalpha();
	return (0);
}
