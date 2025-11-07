#include "libft.h"
#include "libtest.h"

void	useful_noop(void *content)
{
	(void)content;
}

void	useful_delet(void *content)
{
	free(content);
}

int	useful_check_tab( size_t nmemb, char type, void *tab,...)
{
	va_list	ap;
	size_t	i;
	int		expected;

	i = 0;
	va_start(ap, tab);
	while (i < nmemb)
	{
		expected = va_arg(ap, int);
		if (type == 'i' && ((int *)tab)[i] != expected)
		{
			va_end(ap);
			return (i);
		}
		if (type == 'c' && ((char *)tab)[i] != (char)expected)
		{
			va_end(ap);
			return (i);
		}
		i++;
	}
	va_end(ap);
	return (-1);
}

int	useful_check_tabs(size_t nmemb, char **tabs, ...)
{
	va_list ap;
	size_t	i;
	char	*expected;

	i = 0;
	va_start(ap, tabs);
	while (i < nmemb)
	{
		expected = va_arg(ap, char *);
		if (strcmp(tabs[i], expected) != 0)
		{
			va_end(ap);
			return (i);
		}
		i++;
	}
	va_end(ap);
	return (-1);
}

void	useful_write_tabs(char	**tabs)
{
	int	i;
	int	j;

	i = 0;
	while (tabs[i])
	{
		j = 0;
		while (tabs[i][j])
			write(1, &tabs[i][j++], 1);
		write(1, "\n", 1);
		i++;
	}
}

char	useful_add_index(unsigned int i, char c)
{
	return (c + i);
}

void	useful_add_index_ptr(unsigned int i, char *c)
{
	*c += i;
}


int	useful_check_list(t_list *list, char **expected)
{
	int	i;

	i = 0;
	while (expected[i] != NULL)
	{
		if (list == NULL)
			return (i);
		if (strcmp(expected[i], (char *)list->content) != 0)
			return (i);
		i++;
		list = list->next;
	}
	if (list != NULL)
		return (i);
	return (-1);
}

void	useful_upper(void *content)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = (char *)content;
	while (tmp[i])
	{
		if (tmp[i] >= 'a' && tmp[i] <= 'z')
			tmp[i] -= 32;
		i++;
	}
}

void	*useful_new_list(void *content)
{
	char	*str;
	char	*new;

	str = (char *)content;
	new = malloc(strlen(str) + 1);
	if (!new)
		return (NULL);
	strcpy(new, str);
	return (new);
}

void	*useful_add_a(void *content)
{
	char *str;
	char *new;

	str = (char *)content;
	new = malloc(strlen(str) + 2);
	if (!new)
		return (NULL);
	*new = '\0';
	strcat(new, "a");
	strcat(new, str);
	return (new);
}

void	useful_print_bytes(char *bytes, size_t n)
{
	while (n)
	{
		printf("%02x", *bytes);
		bytes++;
		n--;
	}
}
