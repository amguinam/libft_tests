#include "libft.h"
#include "libtest.h"

int	ft_strdup_test(void)
{
 	int		ok;
	char	*save_ft_strdup;
	char	*src;

	ok = 1;
	src = "coucou";
	save_ft_strdup = ft_strdup(src);
	if (save_ft_strdup == 0)
	{
		printf("ft_strdup coucou, ko : NULL\n");
		ok = 0;
	}
	else if (strcmp(save_ft_strdup, "coucou") != 0)
	{
		printf("ft_strdup coucou, ko emplacement : %s\n", save_ft_strdup);
		ok = 0;
	}
	else if (src == save_ft_strdup)
	{
		printf("ft_strdup coucou, ko not a duplicate\n");
		ok = 0;
	}
	free(save_ft_strdup);
	save_ft_strdup = ft_strdup("");
	if (save_ft_strdup == 0)
	{
		printf("ft_strdup nmemb : 0 size int, ko :%s , expect :0\n", save_ft_strdup);
		ok = 0;
	}
	free(save_ft_strdup);
	return (ok);
}
