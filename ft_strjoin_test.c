#include "libft.h"
#include "libtest.h"

int	ft_strjoin_test(void)
{
 	int		ok;
	char	*joined;

	ok = 1;
	joined = ft_strjoin("cou", "cou");
	if (joined == 0)
	{
		printf("ft_strjoin s1 : cou, s2 : cou, ko : NULL\n");
		ok = 0;
	}
	else if (strcmp(joined, "coucou") != 0)
	{
		printf("ft_strjoin s1 : cou, s2 : cou, ko : %s, expect : coucou\n", joined);
		ok = 0;
	}
	free(joined);
	joined = ft_strjoin("coucou", "");
	if (joined == 0)
	{
		printf("ft_strjoin s1 : coucou, s2 : empty, ko : NULL\n");
		ok = 0;
	}
	else if (strcmp(joined, "coucou") != 0)
	{
		printf("ft_strjoin s1 : coucou, s2 : empty, ko : %s, expect : coucou\n", joined);
		ok = 0;
	}
	free(joined);
	joined = ft_strjoin("", "coucou");
	if (joined == 0)
	{
		printf("ft_strjoin s1 : empty, s2 : coucou, ko : NULL\n");
		ok = 0;
	}
	else if (strcmp(joined, "coucou") != 0)
	{
		printf("ft_strjoin s1 : empty, s2 : coucou, ko : %s, expect : coucou\n", joined);
		ok = 0;
	}
	free(joined);
	joined = ft_strjoin("" , "");
	if (joined == 0)
	{
		printf("ft_strjoin 2 string empty, ko :%s , expect :0\n", joined);
		ok = 0;
	}
	free(joined);
	return (ok);
}
