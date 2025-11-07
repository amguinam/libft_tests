#include "libft.h"
#include "libtest.h"

int	ft_memcpy_test(void)
{
 	int		ok;
	char	tab[101] = "coucou";
	char	tab2[101] = "coucou";

	ok = 1;
	ft_bzero(tab2, 10);
	ft_bzero(tab, 10);
	ft_memcpy(tab, "t\0to", 4);
	memcpy(tab2, "t\0to", 4);
	if (memcmp(tab, tab2, 10) != 0)
	{
		printf("t\\0to , ko = ");
		useful_print_bytes(tab, 4);
		printf(", expect : ");
		useful_print_bytes(tab2, 4);
		printf("\n");
		ok = 0;
	}
	ft_memcpy(tab, "coucou", 6);
	memcpy(tab2, "coucou", 6);
	if (memcmp(tab, tab2, 6) != 0)
	{
		printf("coucou , ko = %s, expect : %s\n", tab, tab2);
		ok = 0;
	}
	ft_memcpy(tab, "coucou plop", 11);
	memcpy(tab2, "coucou plop", 11);
	if (memcmp(tab, tab2, 11) != 0)
	{
		printf("coucou plop , ko = %s, expect : %s\n", tab, tab2);
		ok = 0;
	}
	ft_memcpy(tab, "", 1);
	memcpy(tab2, "", 1);
	if (memcmp(tab, tab2, 1) != 0)
	{
		printf("empty , ko = %s, expect : %s\n", tab, tab2);
	ok = 0;
	}
	ft_memcpy(tab, "\t", 1);
	memcpy(tab2, "\t" , 1);
	if (memcmp(tab, tab2, 1) != 0)
	{
		printf("whitespace(t) , ko = %s, expect : %s\n", tab, tab2);
		ok = 0;
	}

	ft_memcpy(tab, "\t\f ", 3);
	memcpy(tab2, "\t\f " , 3);
	if (memcmp(tab, tab2, 3) != 0)
	{
		printf("whitespace(t)(f)space , ko = %s, expect : %s\n", tab, tab2);
		ok = 0;
	}
	ft_memcpy(tab, " ", 1);
	memcpy(tab2, " ", 1);
	if (memcmp(tab, tab2, 1) != 0)
	{
		printf("space , ko = %s, expect : %s\n", tab, tab2);
		ok = 0;
	}
	ft_memcpy(tab, "3501", 4);
	memcpy(tab2, "3501", 4);
	if (memcmp(tab, tab2, 4) != 0)
	{
		printf("3501 , ko = %s, expect : %s\n", tab, tab2);
		ok = 0;
	}
	ft_memcpy(tab, "&C-1a", 5);
	memcpy(tab2, "&C-1a", 5);
	if (memcmp(tab, tab2, 5) != 0)
	{
		printf("&C-1a , ko = %s, expect : %s\n", tab, tab2);
		ok = 0;
	}
	return (ok);
}
