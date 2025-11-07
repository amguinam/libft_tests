#include "libft.h"
#include "libtest.h"

int	ft_lstlast_test(void)
{
	int		ok;
	t_list	*list;
	t_list	*last;

	ok = 1;
	list = NULL;
	last = ft_lstlast(list);
	if (last != NULL)
	{
		printf("lstlast NULL : ko = %s, expect : NULL\n", (char *)list->content);
		ok = 0;
	}
	ft_lstadd_front(&list, ft_lstnew(strdup("coucou")));
	last = ft_lstlast(list);
	if (last != list)
	{
		printf("lstlast one element : ko = %s, expect : coucou\n", (char *)list->content);
		ok = 0;
	}
	ft_lstadd_front(&list, ft_lstnew(strdup("plop")));
	ft_lstadd_front(&list, ft_lstnew(strdup("kaka")));
	last = ft_lstlast(list);
	if (strcmp((char *)last->content, "coucou") != 0)
	{
		printf("lstlast many element : ko = %s, expect : coucou\n", (char *)list->content);
		ok = 0;
	}
	ft_lstadd_back(&list, ft_lstnew(strdup("last")));
	last = ft_lstlast(list);
	if (strcmp((char *)last->content, "last") != 0)
	{
		printf("lstlast new last element : ko = %s, expect : last\n", (char *)list->content);
		ok = 0;
	}
	ft_lstclear(&list, useful_delet);
	return (ok);
}
