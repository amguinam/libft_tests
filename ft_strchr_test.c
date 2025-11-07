#include "libft.h"
#include "libtest.h"

int	ft_strchr_test(void)
{
 	int		ok;
	char	*save_strchr;
	char	*haystack;

	ok = 1;
	haystack = "";
	save_strchr = ft_strchr(haystack, 'c');
	if (save_strchr != 0)
	{
		printf("ft_strchr empty with research c, ko = %s, expect : \n", save_strchr);
		ok = 0;
	}
	haystack = "coucou";
	save_strchr = ft_strchr(haystack, 'c');
	if (save_strchr == 0)
	{
		printf("ft_strchr coucou with research c, ko = NULL, expect : coucou\n");
		ok = 0;
	}
	else if (save_strchr - haystack != 0)
	{
		printf("ft_strchr coucou with research c, ko = %s, expect : coucou\n", save_strchr);
		ok = 0;
	}
	haystack = "coucou";
	save_strchr = ft_strchr(haystack, 'o');
	if (save_strchr == 0)
	{
		printf("ft_strchr coucou with research o, ko = NULL, expect : oucou\n");
		ok = 0;
	}
	else if (save_strchr - haystack != 1)
	{
		printf("ft_strchr coucou with research o, ko = %s, expect : oucou\n", save_strchr);
		ok = 0;
	}
	haystack = "coucou";
	save_strchr = ft_strchr(haystack, '\0');
	if (save_strchr == 0)
	{
		printf("ft_strchr coucou with research \\0, ko = NULL expect : empty\n");
		ok = 0;
	}
	else if (strcmp(save_strchr, "") != 0)
	{
		printf("ft_strchr coucou with research \\0, ko = %s, expect : empty\n", save_strchr);
		ok = 0;
	}
	haystack = "coucou";
	save_strchr = ft_strchr(haystack, 'a');
	if (save_strchr != 0)
	{
		printf("ft_strchr coucou with research a, ko = %s, expect : 0\n", save_strchr);
		ok = 0;
	}
	return (ok);
}

