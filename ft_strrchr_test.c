
#include "libft.h"
#include "libtest.h"

int	ft_strrchr_test(void)
{
 	int		ok;
	char	*save_strrchr;
	char	*haystack;

	ok = 1;
	haystack = "";
	save_strrchr = ft_strrchr(haystack, 'c');
	if (save_strrchr != 0)
	{
		printf("ft_strrchr empty with size 1, ko = %s, expect : \n", save_strrchr);
		ok = 0;
	}
	haystack = "coucou";
	save_strrchr = ft_strrchr(haystack, 'c');
	if (save_strrchr == 0)
	{
		printf("ft_strrchr coucou with research c, ko = NULL, expect : cou\n");
		ok = 0;
	}
	else if (save_strrchr - haystack != 3)
	{
		printf("ft_strrchr coucou with research c, ko = %s, expect : cou\n", save_strrchr);
		ok = 0;
	}
	haystack = "coucou";
	save_strrchr = ft_strrchr(haystack, 'o');
	if (save_strrchr == 0)
	{
		printf("ft_strrchr coucou with research o, ko = NULL, expect : ou\n");
		ok = 0;
	}
	else if (save_strrchr - haystack != 4)
	{
		printf("ft_strrchr coucou with research o, ko = %s, expect : ou\n", save_strrchr);
		ok = 0;
	}
	haystack = "coucou";
	save_strrchr = ft_strrchr(haystack, '\0');
	if (save_strrchr == 0)
	{
		printf("ft_strrchr coucou with research \\0, ko = NULL expect : empty\n");
		ok = 0;
	}
	else if (save_strrchr - haystack != 6)
	{
		printf("ft_strrchr coucou with research \\0, ko = %s, expect : empty\n", save_strrchr);
		ok = 0;
	}
	haystack = "coucou";
	save_strrchr = ft_strrchr(haystack, 'a');
	if (save_strrchr != 0)
	{
		printf("ft_strrchr coucou with research a, ko = %s, expect : 0\n", save_strrchr);
		ok = 0;
	}
	haystack = "couou";
	save_strrchr = ft_strrchr(haystack, 'c');
	if (save_strrchr == 0)
	{
		printf("ft_strrchr couou with research c, ko = NULL, expect : couou\n");
		ok = 0;
	}
	else if (save_strrchr - haystack != 0)
	{
		printf("ft_strrchr couou with research c, ko = %s, expect : couou\n", save_strrchr);
		ok = 0;
	}
	return (ok);
}
