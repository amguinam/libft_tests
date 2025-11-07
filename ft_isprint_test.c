#include "libft.h"
#include "libtest.h"

int ft_isprint_test(void)
{
	int	ok;

	ok = 1;
	if (ft_isprint('a') != 1)
	{
		printf("a , ko = %d, expect : 1\n", ft_isprint('a'));
		ok = 0;
	}
	if (ft_isprint('A') != 1)
	{
		printf("A , ko = %d, expect : 1\n", ft_isprint('A'));
		ok = 0;
	}
	if (ft_isprint('z') != 1)
	{
		printf("z , ko = %d, expect : 1\n", ft_isprint('z'));
		ok = 0;
	}
	if (ft_isprint('Z') != 1)
	{
		printf("Z , ko = %d, expect : 1\n", ft_isprint('Z'));
		ok = 0;
	}
	if (ft_isprint('0') != 1)
	{
		printf("0 , ko = %d, expect : 1\n", ft_isprint('0'));
		ok = 0;
	}
	if (ft_isprint('9') != 1)
	{
		printf("9 , ko = %d, expect : 1\n", ft_isprint('9'));
		ok = 0;
	}
	if (ft_isprint(' ') != 1)
	{
		printf("space , ko = %d, expect : 1\n", ft_isprint(' '));
		ok = 0;
	}
	if (ft_isprint('\t') != 0)
	{
		printf("(whitespace)tab , ko = %d, expect : 0\n", ft_isprint('\t'));
		ok = 0;
	}
	if (ft_isprint('^') != 1)
	{
		printf("^ , ko = %d, expect : 1\n", ft_isprint('^'));
		ok = 0;
	}
	if (ft_isprint('|') != 1)
	{
		printf("| , ko = %d, expect : 1\n", ft_isprint('|'));
		ok = 0;
	}
	if (ft_isprint(350) != 0)
	{
		printf("noascii , ko = %d, expect : 0\n", ft_isprint(350));
		ok = 0;
	}
	if (ft_isprint(127) != 0)
	{
		printf("del , ko = %d, expect : 0\n", ft_isprint(127));
		ok = 0;
	}
	if (ft_isprint(31) != 0)
	{
		printf("31 , ko = %d, expect : 0\n", ft_isprint(31));
		ok = 0;
	}
	return (ok);
}
