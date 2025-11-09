#include "libft.h"
#include "libtest.h"

int	ft_strlcpy_test(void)
{
 	int		ok;
	size_t	save_ft_strlcpy;
	char	tab[101] = "coucou";

	ok = 1;
	save_ft_strlcpy = ft_strlcpy(tab, "aaaa", 0);
	if (save_ft_strlcpy != 4)
	{
		printf("ft_strlcpy aaaa with size 0, ko : %ld, expect = 4\n", save_ft_strlcpy);
		ok = 0;
	}
	if (strcmp(tab, "coucou") != 0)
	{
		printf("ft_strlcpy coucou, ko : %s, expect coucou\n", tab);
		ok = 0;
	}
	save_ft_strlcpy = ft_strlcpy(tab, "", 1);
	if (tab[0] != 0)
	{
		printf("ft_strlcpy empty with size 1, ko = ");
		useful_print_bytes(tab, 1);
		printf(", expect : \\0\n");
		ok = 0;
	}
	if (save_ft_strlcpy != 0)
	{
		printf("ft_strlcpy empty with size 1, ko : %ld, expect = 0\n", save_ft_strlcpy);
		ok = 0;
	}
	if (tab[1] != 'o')
	{
		printf("ft_strlcpy overflow, ko : %c, expect tab[1] = o\n", tab[1]);
		ok = 0;
	}
	save_ft_strlcpy = ft_strlcpy(tab, "plop", 1);
	if (tab[0] != 0)
	{
		printf("ft_strlcpy \"plop\" with size 1, ko = ");
		useful_print_bytes(tab, 1);
		printf(", expect : \\0\n");
		ok = 0;
	}
	if (save_ft_strlcpy != 4)
	{
		printf("ft_strlcpy \"plop\" with size 1, ko : %ld, expect = 4\n", save_ft_strlcpy);
		ok = 0;
	}
	if (tab[1] != 'o')
	{
		printf("ft_strlcpy overflow, ko : %c, expect tab[1] = o\n", tab[1]);
		ok = 0;
	}
	save_ft_strlcpy = ft_strlcpy(tab, "plop", 10);
	if (tab[0] != 'p' || tab[1] != 'l' || tab[2] != 'o' || tab[3] != 'p' || tab[4] != 0)
	{
		printf("ft_strlcpy \"plop\" with size 10, ko = ");
		useful_print_bytes(tab, 4);
		printf(", expect : plop\n");
		ok = 0;
	}
	if (save_ft_strlcpy != 4)
	{
		printf("ft_strlcpy \"plop\" with size 10, ko : %ld, expect = 4\n", save_ft_strlcpy);
		ok = 0;
	}
	if (tab[5] != 'u')
	{
		printf("ft_strlcpy overflow, ko : %c, expect tab[1] = o\n", tab[5]);
		ok = 0;
	}
	save_ft_strlcpy = ft_strlcpy(tab, "plop", 5);
	if (tab[0] != 'p' || tab[1] != 'l' || tab[2] != 'o' || tab[3] != 'p' || tab[4] != 0)
	{
		printf("ft_strlcpy \"plop\" with size 5, ko = ");
		useful_print_bytes(tab, 5);
		printf(", expect : plop\n");
		ok = 0;
	}
	if (save_ft_strlcpy != 4)
	{
		printf("ft_strlcpy \"plop\" with size 5, ko : %ld, expect = 4\n", save_ft_strlcpy);
		ok = 0;
	}
	if (tab[5] != 'u')
	{
		printf("ft_strlcpy overflow, ko : %c, expect tab[5] = u\n", tab[5]);
		ok = 0;
	}
	return (ok);
}
