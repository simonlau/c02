#include <assert.h>
#include <stdlib.h>

int		ft_str_is_alpha(char *str);

int	random_num(int low, int high)
{
	int	range;

	range = high - low;
	return ((rand() % range) + low);
}

void	test_valid_lower(void)
{
	char	x[] = "ABCDEFGHIJKLMOPQRSTUVWXYZ";

	assert(ft_str_is_alpha(x));
}

void	test_valid_upper(void)
{
	char	x[] = "abcdefghijklmnopqrstuvwxyz";

	assert(ft_str_is_alpha(x));
}

void	test_empty(void)
{
	char	x[] = "";

	assert(ft_str_is_alpha(x) == 1);
}

void	test_invalid(void)
{
	char	x[] = "abcdefgh_s";

	assert(ft_str_is_alpha(x) == 0);
}

int	main(void)
{
	test_valid_upper();
	test_valid_lower();
	test_empty();
	test_invalid();
}