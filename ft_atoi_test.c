#include "libft.h"
#include "libtest.h"

int	ft_atoi_test(void)
{
	int ok;

	ok = 1;
	if (ft_atoi("-42") != -42)
	{
		printf("-42 : ko = %d, expect : -42\n", ft_atoi("-42"));
		ok = 0;
	}
	if (ft_atoi("42") != 42)
	{
		printf("42 : ko = %d, expect : 42\n", ft_atoi("42"));
		ok = 0;
	}
	if (ft_atoi("0") != 0)
	{
		printf("0 : ko = %d, expect : 0\n", ft_atoi("0"));
		ok = 0;
	}
	if (ft_atoi("-2147483648") != -2147483648)
	{
		printf("-2147483648 : ko = %d, expect : -2147483648\n", ft_atoi("-2147483648"));
		ok = 0;
	}
	if (ft_atoi("2147483647") != 2147483647)
	{
		printf("2147483647 : ko = %d, expect : 2147483647\n", ft_atoi("2147483647"));
		ok = 0;
	}
	if (ft_atoi("   +42") != 42)
	{
		printf("   +42 : ko = %d, expect : 42\n", ft_atoi("   +42"));
		ok = 0;
	}
	if (ft_atoi("1234567890") != 1234567890)
	{
		printf("1234567890 : ko = %d, expect : 1234567890\n", ft_atoi("1234567890"));
		ok = 0;
	}
	if (ft_atoi("++123") != 0)
	{
		printf("++123 : ko = %d, expect : 0\n", ft_atoi("++123"));
		ok = 0;
	}
	if (ft_atoi("--123") != 0)
	{
		printf("--123 : ko = %d, expect : 0\n", ft_atoi("--123"));
		ok = 0;
	}
	if (ft_atoi("+-123") != 0)
	{
		printf("+-123 : ko = %d, expect : 0\n", ft_atoi("+-123"));
		ok = 0;
	}
	if (ft_atoi("-+123") != 0)
	{
		printf("-+123 : ko = %d, expect : 0\n", ft_atoi("-+123"));
		ok = 0;
	}
	if (ft_atoi("+ 123") != 0)
	{
		printf("+ 123 : ko = %d, expect : 0\n", ft_atoi("+ 123"));
		ok = 0;
	}
	if (ft_atoi("22") != 22)
	{
		printf("22 : ko = %d, expect : 22\n", ft_atoi("22"));
		ok = 0;
	}
	if (ft_atoi("") != 0)
	{
		printf(" : ko = %d, expect : 0\n", ft_atoi(""));
		ok = 0;
	}
	if (ft_atoi("\t\n\f\v\r 42") != 42)
	{
		printf("whitespace 42 : ko = %d, expect : 42\n", ft_atoi("\t\n\f\v\r 42"));
		ok = 0;
	}
	if (ft_atoi("4a2") != 4)
	{
		printf("4a2 : ko = %d, expect : 4\n", ft_atoi("4a2"));
		ok = 0;
	}
	if (ft_atoi("4 2") != 4)
	{
		printf("4 2 : ko = %d, expect : 4\n", ft_atoi("4 2"));
		ok = 0;
	}
	if (ft_atoi("02147483647") != 2147483647)
	{
		printf("02147483647 : ko = %d, expect : 2147483647\n",
		ft_atoi("02147483647"));
		ok = 0;
	}
	if (ft_atoi("-0002147483648") != -2147483648)
	{
		printf("-0002147483648 : ko = %d, expect : -2147483648\n", ft_atoi("-0002147483648"));
		ok = 0;
	}
	// test no crash on overflow
	ft_atoi("2147483649");
	return (ok);
}
