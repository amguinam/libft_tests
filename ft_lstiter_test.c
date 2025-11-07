#include "libft.h"
#include "libtest.h"

int	ft_lstiter_test(void)
{
	int		ok;
	t_list	*list;

	ok = 1;
	list = NULL;
	ft_lstiter(list, useful_upper);
	ft_lstadd_back(&list, ft_lstnew(strdup("coucou")));
	ft_lstadd_back(&list, ft_lstnew(strdup("plop")));
	ft_lstiter(list, useful_upper);
	if (strcmp((char *)list->content, "COUCOU") != 0)
	{
		printf("lstiter element list: ko = %s, expect : COUCOU", (char *)list->content);
		ok = 0;
	}
	if (strcmp((char *)list->next->content, "PLOP") != 0)
	{
		printf("lstiter next element list: ko = %s, expect : PLOP", (char
		*)list->next->content);
		ok = 0;
	}
	ft_lstclear(&list, useful_delet);
	return (ok);
}
