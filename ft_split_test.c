#include "libft.h"
#include "libtest.h"

int	ft_split_test(void)
{
 	int		ok;
	int		i;
 	int		check_tabs;
	char	**new_ft_split;

	ok = 1;
	new_ft_split = ft_split("couplopouc", 'c');
	if (new_ft_split == 0)
	{
		printf("ft_split couplopouc with c, ko : NULL\n");
		ok = 0;
	}
	check_tabs = useful_check_tabs(1, new_ft_split, "ouplopou");
	if (check_tabs != -1)
	{
		write(1, "ft_split couploppouc with c, ko:", 32);
		useful_write_tabs(new_ft_split);
		ok = 0;
	}
	i = 0;
	while (new_ft_split[i])
		free(new_ft_split[i++]);
	free(new_ft_split);
	new_ft_split = ft_split("couplopouc", 'u');
	if (new_ft_split == 0)
	{
		printf("ft_split couplopouc with u, ko : NULL\n");
		ok = 0;
	}
	check_tabs = useful_check_tabs(3, new_ft_split, "co", "plopo", "c");
	if (check_tabs != -1)
	{
		write(1, "ft_split couploppouc with u, ko:", 32);
		useful_write_tabs(new_ft_split);
		ok = 0;
	}
	i = 0;
	while (new_ft_split[i])
		free(new_ft_split[i++]);
	free(new_ft_split);
	new_ft_split = ft_split("coucou plop", ' ');
	if (new_ft_split == 0)
	{
		printf("ft_split coucou plop with space, ko : NULL\n");
		ok = 0;
	}
	check_tabs = useful_check_tabs(2, new_ft_split, "coucou", "plop");
	if (check_tabs != -1)
	{
		write(1, "ft_split coucou plop with space, ko:", 36);
		useful_write_tabs(new_ft_split);
		ok = 0;
	}
	i = 0;
	while (new_ft_split[i])
		free(new_ft_split[i++]);
	free(new_ft_split);
	return (ok);
}
