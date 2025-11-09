#include "libft.h"
#include "libtest.h"

int	ft_strncmp_test(void)
{
 	int	ok;
	int	save_strncmp;

	ok = 1;
	save_strncmp = ft_strncmp("coucou", "coucou", 6);
	if (save_strncmp != 0)
	{
		printf("ft_strncmp s1 : coucou s2 : coucou size : 6, ko : %d, expect : 0\n" , save_strncmp);
		ok = 0;
	}
	save_strncmp = ft_strncmp("coucou\x80", "coucou\x00", 7);
	if (save_strncmp != 128)
	{
		printf("ft_strncmp s1 : coucou\\x80 s2 : coucou\\x00 size : 7, ko : %d, expect : 128\n" , save_strncmp);
		ok = 0;
	}
	save_strncmp = ft_strncmp("", "coucou", 6);
	if (save_strncmp > 0)
	{
		printf("ft_strncmp s1 : empty s2 : coucou size : 6, ko : %d, expect : negative number\n" , save_strncmp);
		ok = 0;
	}
	save_strncmp = ft_strncmp("coucou", "", 4);
	if (save_strncmp < 0)
	{
		printf("ft_strncmp s1 : coucou s2 : empty size : 4, ko : %d, expect : positive number\n" , save_strncmp);
		ok = 0;
	}
	save_strncmp = ft_strncmp("", "", 3);
	if (save_strncmp != 0)
	{
		printf("ft_strncmp s1 : empty s2 : empty size : 3, ko : %d, expect : 0\n" , save_strncmp);
		ok = 0;
	}
	save_strncmp = ft_strncmp("", "", 0);
	if (save_strncmp != 0)
	{
		printf("ft_strncmp s1 : empty s2 : empty size : 0, ko : %d, expect : 0\n" , save_strncmp);
		ok = 0;
	}
	save_strncmp = ft_strncmp("plop", "coucou", 0);
	if (save_strncmp != 0)
	{
		printf("ft_strncmp s1 : plop s2 : coucou size : 0, ko : %d, expect : 0\n" , save_strncmp);
		ok = 0;
	}
	save_strncmp = ft_strncmp("plop", "coucou", 6);
	if (save_strncmp < 0)
	{
		printf("ft_strncmp s1 : plop s2 : coucou size : 6, ko : %d, expect : positive number\n" , save_strncmp);
		ok = 0;
	}
	save_strncmp = ft_strncmp("plop", "coucou", 1);
	if (save_strncmp < 0)
	{
		printf("ft_strncmp s1 : plop s2 : coucou size : 1, ko : %d, expect : positive number\n" , save_strncmp);
		ok = 0;
	}
	save_strncmp = ft_strncmp("cou", "coucou", 3);
	if (save_strncmp != 0)
	{
		printf("ft_strncmp s1 : cou s2 : coucou size : 3, ko : %d, expect : 0\n" , save_strncmp);
		ok = 0;
	}
	save_strncmp = ft_strncmp("cou", "coucou", 4);
	if (save_strncmp > 0)
	{
		printf("ft_strncmp s1 : cou s2 : coucou size : 4, ko : %d, expect : negative number\n" , save_strncmp);
		ok = 0;
	}
	return (ok);
}
