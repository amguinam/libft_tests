#include "libft.h"
#include "libtest.h"

int	ft_strmapi_test(void)
{
 	int		ok;
	char	*new_strmapi;

	ok = 1;
	new_strmapi = ft_strmapi("0000", useful_add_index);
	if (new_strmapi == 0)
	{
		printf("ft_strmapi string: 0000 add index, ko: NULL\n");
		ok = 0;
	}
	else if (strcmp(new_strmapi, "0123") != 0)
	{
		printf("ft_strmapi 0000 add index, ko: %s, expect: 0123\n", new_strmapi);
		ok = 0;
	}
	free(new_strmapi);
	new_strmapi = ft_strmapi("", useful_add_index);
	if (new_strmapi == 0)
	{
		printf("ft_strmapi string: 0000 add index, ko: NULL\n");
		ok = 0;
	}
	else if (strcmp(new_strmapi, "") != 0)
	{
		printf("ft_strmapi empty add index, ko: %s, expect: empty\n", new_strmapi);
		ok = 0;
	}
	free(new_strmapi);
	return (ok);
}
