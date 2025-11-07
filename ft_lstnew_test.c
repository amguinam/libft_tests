#include "libft.h"
#include "libtest.h"

int	ft_lstnew_test(void)
{
	int		ok;
	t_list	*node;
	char	*str;

	ok = 1;
	str = "coucou";
	node = ft_lstnew(str);
	if (node == NULL)
	{
		printf("coucou : ko, node = NULL\n");
		ok = 0;
	}
	else if ((char *)node->content != str)
	{
		printf("coucou : ko = %s, expect : coucou\n", (char *)node->content);
		ok = 0;
	}
	else if (node->next != NULL)
	{
		printf("coucou : ko, node->next != NULL");
		ok = 0;
	}
	free(node);
	node = ft_lstnew(NULL);
	if (node == NULL)
	{
		printf("NULL : ko, node = NULL\n");
		ok = 0;
	}
	else if (node->content != NULL)
	{
		printf("coucou : ko = %s, expect : NULL\n", (char *)node->content);
		ok = 0;
	}
	else if (node->next != NULL)
	{
		printf("coucou : ko, node->next != NULL");
		ok = 0;
	}
	free(node);
	return (ok);
}
