#include "libft.h"
#include "libtest.h"
#include <bsd/string.h>

int	ft_strnstr_test(void)
{
 	int		ok;
	char	*save_ft_strnstr;
	char	*haystack;

	ok = 1;
	haystack = "coucou plop";
	save_ft_strnstr = ft_strnstr(haystack, "plop", 10);
	if (save_ft_strnstr != 0)
	{
		printf("ft_strnstr sbig : coucou plop ,slittle : plop ,size 10, ko : NULL\n");
		ok = 0;
	}
	haystack = "coucou plop";
	save_ft_strnstr = ft_strnstr(haystack, "plop", 3);
	if (save_ft_strnstr != 0)
	{
		printf("ft_strnstr sbig : coucou plop ,slittle : plop ,size 3, ko : %s, expect = NULL\n", save_ft_strnstr);
		ok = 0;
	}
	haystack = "coucou pl";
	save_ft_strnstr = ft_strnstr(haystack, "plop", 10);
	if (save_ft_strnstr != 0)
	{
		printf("ft_strnstr sbig : coucou pl ,slittle : plop ,size 10, ko : %s, expect = NULL\n", save_ft_strnstr);
		ok = 0;
	}
	haystack = "";
	save_ft_strnstr = ft_strnstr(haystack, "", 1);
	if (save_ft_strnstr == 0)
	{
		printf("ft_strnstr sbig : empty ,slittle : empty ,size 1, ko : NULL\n");
		ok = 0;
	}
	else if (save_ft_strnstr - haystack != 0)
	{
		printf("ft_strnstr sbig : empty,slittle : empty ,size 1, ko : %s, expect = coucou\n", save_ft_strnstr);
		ok = 0;
	}
	haystack = "coucou";
	save_ft_strnstr = ft_strnstr(haystack, "", 1);
	if (save_ft_strnstr == 0)
	{
		printf("ft_strnstr sbig : coucou ,slittle : empty ,size 1, ko : NULL\n");
		ok = 0;
	}
	else if (save_ft_strnstr - haystack != 0)
	{
		printf("ft_strnstr sbig : coucou,slittle : empty ,size 1, ko : %s, expect = coucou\n", save_ft_strnstr);
		ok = 0;
	}
	haystack = "coucou plop";
	save_ft_strnstr = ft_strnstr(haystack, "cou", 10);
	if (save_ft_strnstr == 0)
	{
		printf("ft_strnstr sbig : coucou plop ,slittle : cou ,size 10, ko : NULL, expect = coucou plop\n");
		ok = 0;
	}
	else if (save_ft_strnstr - haystack != 0)
	{
		printf("ft_strnstr sbig : coucou plop ,slittle : cou ,size 10, ko : %s, expect = coucou plop\n", save_ft_strnstr);
		ok = 0;
	}
	save_ft_strnstr = ft_strnstr("cou", "coucou", 10);
	if (save_ft_strnstr != 0)
	{
		printf("ft_strnstr sbig : cou ,slittle : coucou ,size 10, ko : %s, expect = NULL\n", save_ft_strnstr);
		ok = 0;
	}
	haystack = "couca";
	save_ft_strnstr = ft_strnstr(haystack, "coucou", 3);
	if (save_ft_strnstr != 0)
	{
		printf("ft_strnstr sbig : couca ,slittle : coucou ,size 3, ko : %s, expect = couca\n", save_ft_strnstr);
		ok = 0;
	}
	return (ok);
}
