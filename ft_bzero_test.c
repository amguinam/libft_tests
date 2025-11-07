#include "libft.h"
#include "libtest.h"

int ft_bzero_test(void)
{
	int		ok;
	int		size;
	char	tab[17] = "coucou plop kaka";
	char	tab2[17] = "coucou plop kaka";

	ok = 1;
	size = 0;
	while (size < 17)
	{
		ft_bzero(tab, size);
		bzero(tab2, size);
		if (memcmp(tab, tab2, 17) != 0)
		{
			printf("size = %d  , ko = %s, expect : %s\n",size , tab, tab2);
			ok = 0;
		}
		size++;
	}
	return (ok);
}
