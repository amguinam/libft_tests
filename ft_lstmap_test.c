#include "libft.h"
#include "libtest.h"

int	ft_lstmap_test(void)
{
	int		check_list;
	int		check_new_list;
	t_list	*list;
	t_list	*new_list;

	list = NULL;
	new_list = ft_lstmap(list, useful_new_list, useful_delet);
	check_list = useful_check_list(list, (char *[]){NULL});
	check_new_list = useful_check_list(new_list, (char *[]){NULL});
	if (check_list >= 0)
	{
		 printf("lstmap list NULL : ko at position %d\n", check_list);
		 ft_lstclear(&new_list, useful_delet);
		 ft_lstclear(&list, useful_delet);
		 return (0);
	}
	if (check_new_list >= 0)
	{
		 printf("lstmap list new NULL : ko at position %d\n", check_new_list);
		 ft_lstclear(&new_list, useful_delet);
		 ft_lstclear(&list, useful_delet);
		 return (0);
	}
	ft_lstadd_back(&list, ft_lstnew(strdup("coucou")));
	ft_lstadd_back(&list, ft_lstnew(strdup("plop")));
	ft_lstadd_back(&list, ft_lstnew(strdup("kaka")));
	new_list = ft_lstmap(list, useful_add_a, useful_delet);
	check_list = useful_check_list(list, (char *[]){"coucou", "plop", "kaka", NULL});
	check_new_list = useful_check_list(new_list, (char *[]){"acoucou", "aplop", "akaka", NULL});
	if (check_list >= 0)
	{
		 printf("lstmap add 3 element list: ko at position %d\n", check_list);
		 ft_lstclear(&new_list, useful_delet);
		 ft_lstclear(&list, useful_delet);
		 return (0);
	}
	if (check_new_list >= 0)
	{
		 printf("lstmap add 3 element new list: ko at position %d\n", check_new_list);
		 ft_lstclear(&new_list, useful_delet);
		 ft_lstclear(&list, useful_delet);
		 return (0);
	}
	ft_lstclear(&list, useful_delet);
	ft_lstclear(&new_list, useful_delet);
	return (1);
}
