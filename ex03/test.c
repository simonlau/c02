#include <assert.h>

int		ft_str_is_numeric(char *str);

void	test_valid(void)
{
	assert(1 == ft_str_is_numeric("0123456789"));
	assert(1 == ft_str_is_numeric("0"));
	assert(1 == ft_str_is_numeric("9"));
}

void	test_invalid(void)
{
	assert(0 == ft_str_is_numeric("012345-6789"));
	assert(0 == ft_str_is_numeric("-0123456789"));
	assert(0 == ft_str_is_numeric("0123456789-"));
	assert(0 == ft_str_is_numeric("01*345?67(9"));
}

void	test_empty(void)
{
	assert(1 == ft_str_is_numeric(""));
}

int	main(void)
{
	test_valid();
	test_invalid();
	test_empty();
}
