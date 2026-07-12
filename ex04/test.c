#include <assert.h>

int		ft_str_is_lowercase(char *str);

void	test_valid(void)
{
	assert(1 == ft_str_is_lowercase("x"));
	assert(1 == ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz"));
}

void	test_invalid(void)
{
	assert(0 == ft_str_is_lowercase("abcdefghijkl5mnopqrstuvwxyz"));
	assert(0 == ft_str_is_lowercase("-ab"));
	assert(0 == ft_str_is_lowercase("ab-"));
}

void	test_empty(void)
{
	assert(1 == ft_str_is_lowercase(""));
}

int	main(void)
{
	test_valid();
	test_invalid();
	test_empty();
}
