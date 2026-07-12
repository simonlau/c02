#include <assert.h>
#include <stdlib.h>

int		ft_str_is_alpha(char *str);

void	test_valid_lower(void)
{
	assert(1 == ft_str_is_alpha("G"));
	assert(1 == ft_str_is_alpha("ABCDEFGHIJKLMOPQRSTUVWXYZ"));
}

void	test_valid_upper(void)
{
	assert(1 == ft_str_is_alpha("g"));
	assert(1 == ft_str_is_alpha("abcdefghijklmnopqrstuvwxyz"));
}

void	test_valid_mixed(void)
{
	assert(1 == ft_str_is_alpha("gAh"));
	assert(1 == ft_str_is_alpha("KKaaLLmm"));
}

void	test_empty(void)
{
	assert(1 == ft_str_is_alpha(""));
}

void	test_invalid(void)
{
	assert(0 == ft_str_is_alpha("?"));
	assert(0 == ft_str_is_alpha("abcde_fghs"));
	assert(0 == ft_str_is_alpha("1abcdefgh"));
	assert(0 == ft_str_is_alpha("abcdefgh9"));
}

int	main(void)
{
	test_valid_upper();
	test_valid_lower();
	test_valid_mixed();
	test_empty();
	test_invalid();
}
