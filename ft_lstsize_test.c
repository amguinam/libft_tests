#include "libft.h"
#include "libtest.h"

int	ft_lstsize_test(void)
{
	int		ok;
	t_list	*list;

	ok = 1;
	list = NULL;
	if (ft_lstsize(list) != 0)
	{
		printf("lstsize empty : ko = %d, expect : NULL\n", ft_lstsize(list));
		ok = 0;
	}
	ft_lstadd_front(&list, ft_lstnew(strdup("coucou")));
	if (ft_lstsize(list) != 1)
	{
		printf("lstsize one element : ko = %d, expect : 1\n", ft_lstsize(list));
		ok = 0;
	}
	ft_lstadd_front(&list, ft_lstnew(strdup("plop")));
	ft_lstadd_front(&list, ft_lstnew(strdup("kaka")));
	if (ft_lstsize(list) != 3)
	{
		printf("lstsize 3 element : ko = %d, expect : 3 ", ft_lstsize(list));
		ok = 0;
	}
	ft_lstadd_front(&list, ft_lstnew(strdup("4")));
	ft_lstadd_front(&list, ft_lstnew(strdup("5")));
	ft_lstadd_front(&list, ft_lstnew(strdup("6")));
	ft_lstadd_front(&list, ft_lstnew(strdup("7")));
	ft_lstadd_front(&list, ft_lstnew(strdup("8")));
	ft_lstadd_front(&list, ft_lstnew(strdup("9")));
	ft_lstadd_front(&list, ft_lstnew(strdup("10")));
	if (ft_lstsize(list) != 10)
	{
		printf("lstsize 10 element : ko = %d, expect : 10 ", ft_lstsize(list));
		ok = 0;
	}
	ft_lstclear(&list, useful_delet);
	return (ok);
}
