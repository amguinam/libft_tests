#include "libft.h"
#include "libtest.h"

int	ft_strlcat_test(void)
{
 	int		ok;
	size_t	save_ft_strlcat;
	char	tab[101] = "coucou";

	ok = 1;
	save_ft_strlcat = ft_strlcat(tab, "", 1);
	if (strcmp(tab, "coucou") != 0)
	{
		printf("ft_strlcat empty with size 1, ko = %s, expect : coucou\n", tab);
		ok = 0;
	}
	if (save_ft_strlcat != 1)
	{
		printf("ft_strlcat empty with size 1, ko : %ld, expect = 1\n", save_ft_strlcat);
		ok = 0;
	}
	save_ft_strlcat = ft_strlcat(tab, "plop", 1);
	if (strcmp(tab, "coucou") != 0)
	{
		printf("ft_strlcat \"plop\" with size 1, ko = %s, expect : coucou\n", tab);
		ok = 0;
	}
	if (save_ft_strlcat != 5)
	{
		printf("ft_strlcat \"plop\" with size 1, ko : %ld, expect = 4\n", save_ft_strlcat);
		ok = 0;
	}
	save_ft_strlcat = ft_strlcat(tab, "plop", 11);
	if (strcmp(tab, "coucouplop") != 0)
	{
		printf("ft_strlcat \"plop\" with size 11, ko = %s, expect : coucouplop\n", tab);
		ok = 0;
	}
	if (save_ft_strlcat != 10)
	{
		printf("ft_strlcat \"plop\" with size 11, ko : %ld, expect = 10\n", save_ft_strlcat);
		ok = 0;
	}
	save_ft_strlcat = ft_strlcat(tab, "kaka", 13);
	if (strcmp(tab, "coucouplopka") != 0)
	{
		printf("ft_strlcat \"kaka\" with size 13, ko = %s, expect : coucouplopka\n", tab);
		ok = 0;
	}
	if (save_ft_strlcat != 14)
	{
		printf("ft_strlcat \"kaka\" with size 13, ko : %ld, expect = 14\n", save_ft_strlcat);
		ok = 0;
	}
	save_ft_strlcat = ft_strlcat(tab, "last", 30);
	if (strcmp(tab, "coucouplopkalast") != 0)
	{
		printf("ft_strlcat \"last\" with size 30, ko = %s, expect : coucouplopkalast\n", tab);
		ok = 0;
	}
	if (save_ft_strlcat != 16)
	{
		printf("ft_strlcat \"last\" with size 30, ko : %ld, expect = 16\n", save_ft_strlcat);
		ok = 0;
	}
	return (ok);
}
