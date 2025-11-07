#include "libft.h"
#include "libtest.h"

int ft_isalpha_test(void)
{
	int	ok;

	ok = 1;
	if (ft_isalpha('a') != 1)
	{
		printf("a , ko = %d, expect : 1\n", ft_isalpha('a'));
		ok = 0;
	}
	if (ft_isalpha('A') != 1)
	{
		printf("A , ko = %d, expect : 1\n", ft_isalpha('A'));
		ok = 0;
	}
	if (ft_isalpha('z') != 1)
	{
		printf("z , ko = %d, expect : 1\n", ft_isalpha('z'));
		ok = 0;
	}
	if (ft_isalpha('Z') != 1)
	{
		printf("Z , ko = %d, expect : 1\n", ft_isalpha('Z'));
		ok = 0;
	}
	if (ft_isalpha('0') != 0)
	{
		printf("0 , ko = %d, expect : 0\n", ft_isalpha('0'));
		ok = 0;
	}
	if (ft_isalpha('9') != 0)
	{
		printf("9 , ko = %d, expect : 0\n", ft_isalpha('9'));
		ok = 0;
	}
	if (ft_isalpha(' ') != 0)
	{
		printf("space , ko = %d, expect : 0\n", ft_isalpha(' '));
		ok = 0;
	}
	if (ft_isalpha('\t') != 0)
	{
		printf("(whitespace)tab , ko = %d, expect : 0\n", ft_isalpha('\t'));
		ok = 0;
	}
	if (ft_isalpha('^') != 0)
	{
		printf("^ , ko = %d, expect : 0\n", ft_isalpha('^'));
		ok = 0;
	}
	if (ft_isalpha('|') != 0)
	{
		printf("| , ko = %d, expect : 0\n", ft_isalpha('|'));
		ok = 0;
	}
	return (ok);
}
