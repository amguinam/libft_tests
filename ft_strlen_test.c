#include "libft.h"
#include "libtest.h"

int	ft_strlen_test(void)
{
	int	ok;

	ok = 1;
	if (ft_strlen("coucou") != 6)
	{
		printf("coucou ko = %ld expect 6\n", ft_strlen("coucou"));
		ok = 0;
	}
	if (ft_strlen("") != 0)
	{
		printf("empty ko = %ld expect 0\n", ft_strlen(""));
		ok = 0;
	}
	if (ft_strlen("coucou plop") != 11)
	{
		printf("coucou plop ko = %ld expect 11\n", ft_strlen("coucou plop"));
		ok = 0;
	}
	if (ft_strlen("   ") != 3)
	{
		printf("3space ko= %ld expect 3\n", ft_strlen("   "));
		ok = 0;
	}
	if (ft_strlen("\t") != 1)
	{
		printf("whitepace(t) = %ld expect 1\n", ft_strlen("\t"));
		ok = 0;
	}
	if (ft_strlen("coucou\tplop\n") != 12)
	{
		printf("coucouwhitespace(t)plopwhitepace(n) ko = %ld expect 12\n",
		ft_strlen("coucou\tplop\n"));
		ok = 0;
	}
	if (ft_strlen("abcdefghijklmnopkrstuvwxyz") != 26)
	{
		printf("abcdefghijklmnopkrstuvwxyz ko = %ld expect 26\n", ft_strlen("abcdefghijklmnopkrstuvwxyz"));
		ok = 0;
	}
	if (ft_strlen("-") != 1)
	{
		printf("- ko = %ld expect 1\n", ft_strlen("-"));
		ok = 0;
	}
	return (ok);
}
