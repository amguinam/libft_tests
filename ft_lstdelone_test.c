#include "libft.h"
#include "libtest.h"

int	ft_lstdelone_test(void)
{
	int		ok;
	t_list	*node;
	char	*content;

	ok = 1;
	content = strdup("coucou");
	node = ft_lstnew(content);
	ft_lstdelone(node, useful_delet);
	node = ft_lstnew(NULL);
	ft_lstdelone(node, useful_delet);
	ft_lstdelone(NULL, useful_delet);
	node = ft_lstnew(strdup("plop"));
	//ft_lstdelone(node, NULL);
	free(node->content);
	free(node);
	return (ok);
}
