#include "libft.h"
#include "libtest.h"

int ft_isdigit_test(void)
{
	int	ok;

	ok = 1;
	if (ft_isdigit('a') != 0)
	{
		printf("a , ko = %d, expect : 0\n", ft_isdigit('a'));
		ok = 0;
	}
	if (ft_isdigit('A') != 0)
	{
		printf("A , ko = %d, expect : 0\n", ft_isdigit('A'));
		ok = 0;
	}
	if (ft_isdigit('z') != 0)
	{
		printf("z , ko = %d, expect : 0\n", ft_isdigit('z'));
		ok = 0;
	}
	if (ft_isdigit('Z') != 0)
	{
		printf("Z , ko = %d, expect : 0\n", ft_isdigit('Z'));
		ok = 0;
	}
	if (ft_isdigit('0') != 1)
	{
		printf("0 , ko = %d, expect : 1\n", ft_isdigit('0'));
		ok = 0;
	}
	if (ft_isdigit('9') != 1)
	{
		printf("9 , ko = %d, expect : 1\n", ft_isdigit('9'));
		ok = 0;
	}
	if (ft_isdigit(' ') != 0)
	{
		printf("space , ko = %d, expect : 0\n", ft_isdigit(' '));
		ok = 0;
	}
	if (ft_isdigit('\t') != 0)
	{
		printf("(whitespace)tab , ko = %d, expect : 0\n", ft_isdigit('\t'));
		ok = 0;
	}
	if (ft_isdigit('^') != 0)
	{
		printf("^ , ko = %d, expect : 0\n", ft_isdigit('^'));
		ok = 0;
	}
	if (ft_isdigit('|') != 0)
	{
		printf("| , ko = %d, expect : 0\n", ft_isdigit('|'));
		ok = 0;
	}
	return (ok);
}
