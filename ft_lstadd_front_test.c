#include "libft.h"
#include "libtest.h"

int	ft_lstadd_front_test(void)
{
	int		check_list;
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	list = NULL;
	node1 = ft_lstnew("coucou");
	ft_lstadd_front(&list, node1);
	check_list = useful_check_list(list, (char *[]){"coucou", NULL});
	if (check_list >= 0)
	{
		printf("lstadd_frond 1 node: ko at position %d\n", check_list);
		free(node1);
		return (0);
	}
	node2 = ft_lstnew("plop");
	ft_lstadd_front(&list, node2);
	check_list = useful_check_list(list, (char *[]){"plop", "coucou", NULL});
	if (check_list >= 0)
	{
		printf("lstadd_frond 2 node: ko at position %d\n", check_list);
		free(node1);
		free(node2);
		return (0);
	}
	node3 = ft_lstnew("kaka");
	ft_lstadd_front(&list, node3);
	check_list = useful_check_list(list, (char *[]){"kaka", "plop", "coucou", NULL});
	if (check_list >= 0)
	{
		printf("lstadd_frond 3 node: ko at position %d\n", check_list);
		free(node1);
		free(node2);
		free(node3);
		return (0);

	}
	ft_lstadd_front(&list, NULL);
	check_list = useful_check_list(list, (char *[]){"kaka", "plop", "coucou", NULL});
	if (check_list >= 0)
	{
		printf("lstadd_frond add NULL first position : ko at position %d\n", check_list);
		free(node1);
		free(node2);
		free(node3);
		return (0);

	}
	ft_lstclear(&list, useful_noop);
	return (1);
}
