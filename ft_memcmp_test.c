#include "libft.h"
#include "libtest.h"

int	ft_memcmp_test(void)
{
 	int	ok;
	int	save_ft_memcmp;

	ok = 1;
	save_ft_memcmp = ft_memcmp("coucou", "coucou", 7);
	if (save_ft_memcmp != 0)
	{
		printf("ft_memcmp s1: coucou s2 : coucou size : 7, ko = %d, expect : 0\n", save_ft_memcmp);
		ok = 0;
	}
	save_ft_memcmp = ft_memcmp("\0a", "\0b", 2);
	if (save_ft_memcmp > 0)
	{
		printf("ft_memcmp s1 : \\0a s2 : \\0b size : 2, ko = %d, expect : negative number\n", save_ft_memcmp);
		ok = 0;
	}
	save_ft_memcmp = ft_memcmp("plop", "coucou", 4);
	if (save_ft_memcmp < 0)
	{
		printf("ft_memcmp s1 : plop s2 : coucou size : 4, ko = %d, expect : positive number\n", save_ft_memcmp);
		ok = 0;
	}
	save_ft_memcmp = ft_memcmp("coucau", "coucou", 4);
	if (save_ft_memcmp != 0)
	{
		printf("ft_memcmp s1 : coucau s2 : coucou size : 4, ko = %d, expect : 0\n", save_ft_memcmp);
		ok = 0;
	}
	save_ft_memcmp = ft_memcmp("coucau", "coucou", 5);
	if (save_ft_memcmp > 0)
	{
		printf("ft_memcmp s1 : coucau s2 : coucou size : 5, ko = %d, expect : negative number\n", save_ft_memcmp);
		ok = 0;
	}
	save_ft_memcmp = ft_memcmp("coucou", "coucau", 5);
	if (save_ft_memcmp < 0)
	{
		printf("ft_memcmp s1 : coucou s2 : coucau size : 5, ko = %d, expect : positive number\n", save_ft_memcmp);
		ok = 0;
	}
	save_ft_memcmp = ft_memcmp("plop", "coucou", 0);
	if (save_ft_memcmp != 0)
	{
		printf("ft_memcmp s1 : plop s2 : coucou size : 0, ko = %d, expect : 0\n", save_ft_memcmp);
		ok = 0;
	}
	return (ok);
}
