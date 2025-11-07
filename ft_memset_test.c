#include "libft.h"
#include "libtest.h"

int ft_memset_test(void)
{
	int	ok;
	char	tab[10] = "coucou";
	char	tab2[10] = "coucou";

	ok = 1;
	ft_memset(tab, 'a', 9);
	memset(tab2, 'a', 9);
	if (memcmp(tab, tab2, 9) != 0)
	{
		printf("a , ko = %s, expect : %s\n", tab, tab2);
		ok = 0;
	}
	ft_memset(tab, 'z', 2);
	memset(tab2, 'z', 2);
	if (memcmp(tab, tab2, 2) != 0)
	{
		printf("z , ko = %s, expect : %s\n", tab, tab2);
		ok = 0;
	}
	ft_memset(tab, 'Z', 7);
	memset(tab2, 'Z', 7);
	if (memcmp(tab, tab2, 7) != 0)
	{
		printf("Z , ko = %s, expect : %s\n", tab, tab2);
		ok = 0;
	}
	ft_memset(tab, 'A', 6);
	memset(tab2, 'A', 6);
	if (memcmp(tab, tab2, 6) != 0)
	{
		printf("A , ko = %s, expect : %s\n", tab, tab2);
		ok = 0;
	}
	ft_memset(tab, ' ', 3);
	memset(tab2, ' ', 3);
	if (memcmp(tab, tab2, 3) != 0)
	{
		printf("space , ko = %s, expect : %s\n", tab, tab2);
		ok = 0;
	}
	ft_memset(tab, '\t', 9);
	memset(tab2, '\t', 9);
	if (memcmp(tab, tab2, 9) != 0)
	{
		printf("whitespace(t) , ko = %s, expect : %s\n", tab, tab2);
		ok = 0;
	}
	ft_memset(tab, '&', 5);
	memset(tab2, '&', 5);
	if (memcmp(tab, tab2, 5) != 0)
	{
		printf("& , ko = %s, expect : %s\n", tab, tab2);
		ok = 0;
	}
	return (ok);
}
