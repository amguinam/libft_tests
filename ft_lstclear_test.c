#include "libft.h"
#include "libtest.h"

int	ft_lstclear_test(void)
{
	int		ok;
	t_list	*list;

	ok = 1;
	list = NULL;
	ft_lstclear(&list, useful_delet);
	if (list != NULL)
	{
		printf("lstclear clear empty list : ko\n");
		ok = 0;
	}
	ft_lstadd_back(&list, ft_lstnew(strdup("coucou")));
	ft_lstadd_back(&list, ft_lstnew(strdup("plop")));
	ft_lstadd_back(&list, ft_lstnew(strdup("kaka")));
	ft_lstclear(&list, useful_delet);
	if (list != NULL)
	{
		printf("lstclear clear list : ko\n");
		ok = 0;
	}
	ft_lstadd_back(&list, ft_lstnew(strdup("new")));
	if (ft_lstsize(list) != 1)
	{
		printf("lstclear reuse list after clear : ko\n");
		ok = 0;
	}
	ft_lstclear(&list, useful_delet);
	ft_lstadd_back(&list, ft_lstnew(strdup("last")));
	ft_lstclear(&list, NULL);
	if (list == NULL)
	{
		printf("lstclear clear with NULL : ko\n");
		ok = 0;
	}
	ft_lstclear(&list, useful_delet);
	return (ok);
}
