#include "libft.h"
#include "libtest.h"

int ft_tolower_test(void)
{
	int	ok;

	ok = 1;
	if (ft_tolower('a') != 'a')
	{
		printf("ft_tolower a , ko = %d, expect : a\n", ft_tolower('a'));
		ok = 0;
	}
	if (ft_tolower('A') != 'a')
	{
		printf("ft_tolower A , ko = %d, expect : a\n", ft_tolower('A'));
		ok = 0;
	}
	if (ft_tolower('z') != 'z')
	{
		printf("ft_tolower z , ko = %d, expect : z\n", ft_tolower('z'));
		ok = 0;
	}
	if (ft_tolower('Z') != 'z')
	{
		printf("ft_tolower Z , ko = %d, expect : z\n", ft_tolower('Z'));
		ok = 0;
	}
	if (ft_tolower('0') != '0')
	{
		printf("ft_tolower 0 , ko = %d, expect : 0\n", ft_tolower('0'));
		ok = 0;
	}
	if (ft_tolower('^') != '^')
	{
		printf("ft_tolower ^ , ko = %d, expect : ^\n", ft_tolower('^'));
		ok = 0;
	}
	if (ft_tolower('|') != '|')
	{
		printf("ft_tolower | , ko = %d, expect : |\n", ft_tolower('|'));
		ok = 0;
	}
	if (ft_tolower('A' + 0xff00) != 'A' + 0xff00)
	{
		printf("ft_tolower 'A' + 0xff00 , ko = %04x\n", ft_tolower('A' + 0xff00));
		ok = 0;
	}
	return (ok);
}
