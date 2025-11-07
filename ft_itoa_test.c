#include "libft.h"
#include "libtest.h"

int	ft_itoa_test(void)
{
 	int		ok;
	char	*new_itoa;

	ok = 1;
	new_itoa = ft_itoa(0);
	if (new_itoa == 0)
	{
		printf("ft_itoa 0, ko: NULL\n");
		ok = 0;
	}
	else if (strcmp(new_itoa, "0") != 0)
	{
		printf("ft_itoa 0, ko: %s, expect: 0\n", new_itoa);
		ok = 0;
	}
	free(new_itoa);
	new_itoa = ft_itoa(-2147483648);
	if (new_itoa == 0)
	{
		printf("ft_itoa -2147483648, ko: NULL\n");
		ok = 0;
	}
	else if (strcmp(new_itoa, "-2147483648") != 0)
	{
		printf("ft_itoa -2147483648, ko: %s, expect: -2147483648\n", new_itoa);
		ok = 0;
	}
	free(new_itoa);
	new_itoa = ft_itoa(2147483647);
	if (new_itoa == 0)
	{
		printf("ft_itoa 2147483647, ko: NULL\n");
		ok = 0;
	}
	else if (strcmp(new_itoa, "2147483647") != 0)
	{
		printf("ft_itoa 2147483647, ko: %s, expect: 2147483647\n", new_itoa);
		ok = 0;
	}
	free(new_itoa);
	new_itoa = ft_itoa(2147483647);
	if (new_itoa == 0)
	{
		printf("ft_itoa 2147483647, ko: NULL\n");
		ok = 0;
	}
	else if (strcmp(new_itoa, "2147483647") != 0)
	{
		printf("ft_itoa 2147483647, ko: %s, expect: 2147483647\n", new_itoa);
		ok = 0;
	}
	free(new_itoa);
	return (ok);
}
