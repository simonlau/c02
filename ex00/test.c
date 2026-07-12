#include <assert.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

void	test_normal(void)
{
	char	dest[] = "simon";
	char	*result;

	result = ft_strcpy(dest, "12345");
	assert(dest == result);
	assert(strcmp("12345", result) == 0);
}

void	test_empty(void)
{
	char	dest[] = "simon";
	char	*result;

	result = ft_strcpy(dest, "");
	assert(dest == result);
	assert(strcmp("", result) == 0);
}

void	test_src_short(void)
{
	char	dest[] = "simons";
	char	*result;

	result = ft_strcpy(dest, "123");
	assert(dest == result);
	assert(strcmp("123", result) == 0);
	assert(dest[4] == 'n');
	assert(dest[5] == 's');
}

void	test_src_single(void)
{
	char	dest[] = "simons";
	char	*result;

	result = ft_strcpy(dest, "1");
	assert(dest == result);
	assert(strcmp("1", result) == 0);
	assert(dest[2] == 'm');
	assert(dest[3] == 'o');
}

void	test_src_empty(void)
{
	char	dest[] = "simons";
	char	*result;

	result = ft_strcpy(dest, "");
	assert(dest == result);
	assert(strcmp("", result) == 0);
}

void	test_src_dest_same(void)
{
	char	dest[] = "simon";
	char	*result;

	result = ft_strcpy(dest, dest);
	assert(dest == result);
	assert(strcmp("simon", result) == 0);
}

int	main(void)
{
	test_normal();
	test_empty();
	test_src_short();
	test_src_single();
	test_src_empty();
	test_src_dest_same();
}
