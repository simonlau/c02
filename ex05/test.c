#include <assert.h>

int		ft_str_is_uppercase(char *str);

void	test_only_uppercase(void)
{
	assert(1 == ft_str_is_uppercase("M"));
	assert(1 == ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
}

void	test_invalid(void)
{
	assert(0 == ft_str_is_uppercase("x"));
	assert(0 == ft_str_is_uppercase("1S"));
	assert(0 == ft_str_is_uppercase("S1"));
	assert(0 == ft_str_is_uppercase("ABCDEFGHIJKLpMNOPQRSTUVWXYZ"));
}

void	test_empty(void)
{
	assert(1 == ft_str_is_uppercase(""));
}

int	main(void)
{
	test_only_uppercase();
	test_invalid();
	test_empty();
}
