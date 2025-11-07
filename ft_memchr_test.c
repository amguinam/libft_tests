#include "libft.h"
#include "libtest.h"

int	ft_memchr_test(void)
{
 	int		ok;
	char	tab[] = "coucou\0aaa";
	char	*save_ft_memchr;

	ok = 1;
	save_ft_memchr = ft_memchr(tab, '\0', 7);
	if (save_ft_memchr == 0)
	{
		printf("ft_memchr coucou with research \\0 size 7, ko = NULL, expect : coucou\n");
		ok = 0;
	}
	else if (save_ft_memchr - tab != 6)
	{
		printf("ft_memchr coucou research \\0 , ko = %ld, expect :6\n", (save_ft_memchr - tab));
		ok = 0;
	}
	save_ft_memchr = ft_memchr(tab, 'c', 6);
	if (save_ft_memchr == 0)
	{
		printf("ft_memchr coucou with research c size 6, ko = NULL, expect : coucou\n");
		ok = 0;
	}
	else if (save_ft_memchr - tab != 0)
	{
		printf("ft_memchr coucou research c, ko = %ld, expect : 0\n", (save_ft_memchr - tab));
		ok = 0;
	}
	save_ft_memchr = ft_memchr(tab, 'o', 4);
	if (save_ft_memchr == 0)
	{
		printf("ft_memchr coucou with research o size 4, ko = NULL, expect : ouc\n");
		ok = 0;
	}
	else if (save_ft_memchr - tab != 1)
	{
		printf("ft_memchr coucou research o and size 4, ko = %ld, expect : 1\n", (save_ft_memchr - tab));
		ok = 0;
	}
	save_ft_memchr = ft_memchr(tab, ' ', 0);
	if (save_ft_memchr != 0)
	{
		printf("ft_memchr research space size 1, ko = %ld, expect : 0\n", (save_ft_memchr - tab));
		ok = 0;
	}
	save_ft_memchr = ft_memchr(tab, 'u', 2);
	if (save_ft_memchr != 0)
	{
		printf("ft_memchr coucou with research u, ko = %ld, expect : 0\n", (save_ft_memchr - tab));
		ok = 0;
	}
	save_ft_memchr = ft_memchr(tab, 'u', 3);
	if (save_ft_memchr == 0)
	{
		printf("ft_memchr coucou with research u size 3, ko = NULL, expect : u\n");
		ok = 0;
	}
	else if (save_ft_memchr - tab != 2)
	{
		printf("ft_memchr research u size 3 , ko = %ld, expect : 2\n", (save_ft_memchr - tab));
		ok = 0;
	}
	save_ft_memchr = ft_memchr(tab, 'a', 8);
	if (save_ft_memchr == 0)
	{
		printf("ft_memchr coucou with research u size 3, ko = NULL, expect : u\n");
		ok = 0;
	}
	else if (save_ft_memchr - tab != 7)
	{
		printf("ft_memchr research u size 8 , ko = %ld, expect : 7\n", (save_ft_memchr - tab));
		ok = 0;
	}
	return (ok);
}
