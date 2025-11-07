#include "libft.h"
#include "libtest.h"

int ft_toupper_test(void)
{
	int	ok;

	ok = 1;
	if (ft_toupper('a') != 'A')
	{
		printf("ft_toupper a , ko = %d, expect : A\n", ft_toupper('a'));
		ok = 0;
	}
	if (ft_toupper('A') != 'A')
	{
		printf("ft_toupper A , ko = %d, expect : A\n", ft_toupper('A'));
		ok = 0;
	}
	if (ft_toupper('z') != 'Z')
	{
		printf("ft_toupper z , ko = %d, expect : Z\n", ft_toupper('z'));
		ok = 0;
	}
	if (ft_toupper('Z') != 'Z')
	{
		printf("ft_toupper Z , ko = %d, expect : Z\n", ft_toupper('Z'));
		ok = 0;
	}
	if (ft_toupper('0') != '0')
	{
		printf("ft_toupper 0 , ko = %d, expect : 0\n", ft_toupper('0'));
		ok = 0;
	}
	if (ft_toupper('^') != '^')
	{
		printf("ft_toupper ^ , ko = %d, expect : ^\n", ft_toupper('^'));
		ok = 0;
	}
	if (ft_toupper('|') != '|')
	{
		printf("ft_toupper | , ko = %d, expect : |\n", ft_toupper('|'));
		ok = 0;
	}
	if (ft_toupper('a' + 0xff00) != 'a' + 0xff00)
	{
		printf("ft_toupper 'a' + 0xff00 , ko = %04x\n", ft_toupper('a' + 0xff00));
		ok = 0;
	}
	return (ok);
}
