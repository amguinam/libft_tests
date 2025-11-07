#include "libft.h"
#include "libtest.h"

int	ft_calloc_test(void)
{
 	int		ok;
	char	*char_ft_calloc;
	int		*int_ft_calloc;
	int		check_tab;

	ok = 1;
	int_ft_calloc = (int *)ft_calloc(10, sizeof(int));
	if (int_ft_calloc == 0)
	{
		printf("ft_calloc nmemb : 10  size int, ko : NULL -> no alloc\n");
		return (0);
	}
	check_tab = useful_check_tab(10, 'i', int_ft_calloc, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	if (check_tab != -1)
	{
		printf("ft_calloc nmemb : 10 size int, ko emplacement : %d\n", check_tab);
		ok = 0;
	}
	free(int_ft_calloc);
	char_ft_calloc = (char *)ft_calloc(10, sizeof(char));
	if (char_ft_calloc == 0)
	{
		printf("ft_calloc nmemb : 10  size char, ko : NULL -> no alloc\n");
		return (0);
	}
	check_tab = useful_check_tab(10, 'c', char_ft_calloc, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	if (check_tab != -1)
	{
		printf("ft_calloc nmemb : 10 size char, ko emplacement : %d\n", check_tab);
		ok = 0;
	}
	free(char_ft_calloc);
	int_ft_calloc = (int *)ft_calloc(0, sizeof(int));
	if (int_ft_calloc == 0)
	{
		printf("ft_calloc nmemb : 0 size int, ko :%ls , expect :0\n", int_ft_calloc);
		ok = 0;
	}
	free(int_ft_calloc);
	return (ok);
}
