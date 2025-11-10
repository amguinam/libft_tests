#include "libft.h"
#include "libtest.h"

int	ft_substr_test(void)
{
 	int		ok;
	char	*save_ft_substr;

	ok = 1;
	save_ft_substr = ft_substr("coucou" , 10, 10);
	if (save_ft_substr == 0)
	{
		printf("ft_substr coucou research index 10 size 10, ko :NULL\n");
		ok = 0;
	}
	else if (strcmp(save_ft_substr, "") != 0)
	{
		printf("ft_substr coucou research index 10 size 10, ko emplacement : %s\n", save_ft_substr);
		ok = 0;
	}
	free(save_ft_substr);
	save_ft_substr = ft_substr("coucou", 0, 6);
	if (save_ft_substr == 0)
	{
		printf("ft_substr coucou research index 0 size 6, ko : NULL\n");
		ok = 0;
	}
	else if (strcmp(save_ft_substr, "coucou") != 0)
	{
		printf("ft_substr coucou research index 0 size 6, ko emplacement : %s\n", save_ft_substr);
		ok = 0;
	}
	free(save_ft_substr);
	save_ft_substr = ft_substr("coucou", 2, 6);
	if (save_ft_substr == 0)
	{
		printf("ft_substr coucou research index 2 size 6, ko : NULL\n");
		ok = 0;
	}
	else if (strcmp(save_ft_substr, "ucou") != 0)
	{
		printf("ft_substr coucou research index 2 size 6, ko emplacement : %s\n", save_ft_substr);
		ok = 0;
	}
	free(save_ft_substr);
	save_ft_substr = ft_substr("coucou" , 4, 3);
	if (save_ft_substr == 0)
	{
		printf("ft_substr coucou research index 4 size 3, ko :%s , expect :0\n", save_ft_substr);
		ok = 0;
	}
	free(save_ft_substr);
	save_ft_substr = ft_substr("" , 1, 3);
	if (save_ft_substr == 0)
	{
		printf("ft_substr empty research index 1 size 3, ko :%s , expect :0\n", save_ft_substr);
		ok = 0;
	}
	free(save_ft_substr);
	return (ok);
}
