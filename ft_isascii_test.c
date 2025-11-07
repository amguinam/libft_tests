#include "libft.h"
#include "libtest.h"

int ft_isascii_test(void)
{
	int	ok;

	ok = 1;
	if (ft_isascii('a') != 1)
	{
		printf("a , ko = %d, expect : 1\n", ft_isascii('a'));
		ok = 0;
	}
	if (ft_isascii('A') != 1)
	{
		printf("A , ko = %d, expect : 1\n", ft_isascii('A'));
		ok = 0;
	}
	if (ft_isascii('z') != 1)
	{
		printf("z , ko = %d, expect : 1\n", ft_isascii('z'));
		ok = 0;
	}
	if (ft_isascii('Z') != 1)
	{
		printf("Z , ko = %d, expect : 1\n", ft_isascii('Z'));
		ok = 0;
	}
	if (ft_isascii('0') != 1)
	{
		printf("0 , ko = %d, expect : 1\n", ft_isascii('0'));
		ok = 0;
	}
	if (ft_isascii('9') != 1)
	{
		printf("9 , ko = %d, expect : 1\n", ft_isascii('9'));
		ok = 0;
	}
	if (ft_isascii(' ') != 1)
	{
		printf("space , ko = %d, expect : 1\n", ft_isascii(' '));
		ok = 0;
	}
	if (ft_isascii('\t') != 1)
	{
		printf("(whitespace)tab , ko = %d, expect : 1\n", ft_isascii('\t'));
		ok = 0;
	}
	if (ft_isascii('^') != 1)
	{
		printf("^ , ko = %d, expect : 1\n", ft_isascii('^'));
		ok = 0;
	}
	if (ft_isascii('|') != 1)
	{
		printf("| , ko = %d, expect : 1\n", ft_isascii('|'));
		ok = 0;
	}
	if (ft_isascii(350) != 0)
	{
		printf("noascii , ko = %d, expect : 0\n", ft_isascii(350));
		ok = 0;
	}
	return (ok);
}
