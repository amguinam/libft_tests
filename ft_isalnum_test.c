#include "libft.h"
#include "libtest.h"

int ft_isalnum_test(void)
{
	int	ok;

	ok = 1;
	if (ft_isalnum('a') != 1)
	{
		printf("a , ko = %d, expect : 1\n", ft_isalnum('a'));
		ok = 0;
	}
	if (ft_isalnum('A') != 1)
	{
		printf("A , ko = %d, expect : 1\n", ft_isalnum('A'));
		ok = 0;
	}
	if (ft_isalnum('z') != 1)
	{
		printf("z , ko = %d, expect : 1\n", ft_isalnum('z'));
		ok = 0;
	}
	if (ft_isalnum('Z') != 1)
	{
		printf("Z , ko = %d, expect : 1\n", ft_isalnum('Z'));
		ok = 0;
	}
	if (ft_isalnum('0') != 1)
	{
		printf("0 , ko = %d, expect : 1\n", ft_isalnum('0'));
		ok = 0;
	}
	if (ft_isalnum('9') != 1)
	{
		printf("9 , ko = %d, expect : 1\n", ft_isalnum('9'));
		ok = 0;
	}
	if (ft_isalnum(' ') != 0)
	{
		printf("space , ko = %d, expect : 0\n", ft_isalnum(' '));
		ok = 0;
	}
	if (ft_isalnum('\t') != 0)
	{
		printf("(whitespace)tab , ko = %d, expect : 0\n", ft_isalnum('\t'));
		ok = 0;
	}
	if (ft_isalnum('^') != 0)
	{
		printf("^ , ko = %d, expect : 0\n", ft_isalnum('^'));
		ok = 0;
	}
	if (ft_isalnum('|') != 0)
	{
		printf("| , ko = %d, expect : 0\n", ft_isalnum('|'));
		ok = 0;
	}
	if (ft_isalnum(-1) != 0)
	{
		printf("-1 , ko = %d, expect : 0\n", ft_isalnum(-1));
		ok = 0;
	}
	return (ok);
}
