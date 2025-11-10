#include "libft.h"
#include "libtest.h"

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

void	useful_print_bytes(char *bytes, size_t n)
{
	while (n)
	{
		printf("%02x", *bytes);
		bytes++;
		n--;
	}
}
