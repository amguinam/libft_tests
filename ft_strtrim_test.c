#include "libft.h"
#include "libtest.h"

int	ft_strtrim_test(void)
{
 	int		ok;
	char	*new_ft_strtrim;

	ok = 1;
	new_ft_strtrim = ft_strtrim("couplopouc", "cou");
	if (new_ft_strtrim == 0)
	{
		printf("ft_strtrim couplopouc with set cou, ko : NULL\n");
		ok = 0;
	}
	else if (strcmp(new_ft_strtrim, "plop") != 0)
	{
		printf("ft_strtrim couplopouc with set cou, ko : %s, exepect : plop\n", new_ft_strtrim);
		ok = 0;
	}
	free(new_ft_strtrim);
	new_ft_strtrim = ft_strtrim("cuouplop", "cou");
	if (new_ft_strtrim == 0)
	{
		printf("ft_strtrim cuouplop with set cou, ko : NULL\n");
		ok = 0;
	}
	else if (strcmp(new_ft_strtrim, "plop") != 0)
	{
		printf("ft_strtrim cuouplop with set cou, ko : %s, exepect : plop\n", new_ft_strtrim);
		ok = 0;
	}
	free(new_ft_strtrim);
	new_ft_strtrim = ft_strtrim("", "");
	if (new_ft_strtrim == 0)
	{
		printf("ft_strtrim empty with set empty, ko : NULL\n");
		ok = 0;
	}
	else if (strcmp(new_ft_strtrim, "") != 0)
	{
		printf("ft_strtrim empty with set empty, ko : %s, exepect : empty string\n", new_ft_strtrim);
		ok = 0;
	}
	free(new_ft_strtrim);
	new_ft_strtrim = ft_strtrim("plopcou", "cou");
	if (new_ft_strtrim == 0)
	{
		printf("ft_strtrim plopcou with set cou, ko : NULL\n");
		ok = 0;
	}
	else if (strcmp(new_ft_strtrim, "plop") != 0)
	{
		printf("ft_strtrim plopcou with set cou, ko : %s, exepect : plop\n", new_ft_strtrim);
		ok = 0;
	}
	free(new_ft_strtrim);
	new_ft_strtrim = ft_strtrim("cuuucoooc", "cou");
	if (new_ft_strtrim == 0)
	{
		printf("ft_strtrim cuuucoooc with set cou, ko : NULL\n");
		ok = 0;
	}
	else if (strcmp(new_ft_strtrim, "") != 0)
	{
		printf("ft_strtrim cuuucoooc with set cou, ko : %s, exepect : empty string\n", new_ft_strtrim);
		ok = 0;
	}
	free(new_ft_strtrim);
	return (ok);
}
