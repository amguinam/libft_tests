#include "libft.h"
#include "libtest.h"

int	ft_striteri_test(void)
{
 	int		ok;
	char	s1[] = "0000";
	char	s2[] = "";

	ok = 1;
	ft_striteri(s1, useful_add_index_ptr);
	if (strcmp(s1, "0123") != 0)
	{
		printf("ft_striteri 0000 add index, ko: %s, expect: 0123\n", s1);
		ok = 0;
	}
	ft_striteri(s2, useful_add_index_ptr);
	if (strcmp(s2, "") != 0)
	{
		printf("ft_striteri empty add index, ko: %s, expect: empty\n", s2);
		ok = 0;
	}
	return (ok);
}
