/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   useful_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amguinam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:01:17 by amguinam          #+#    #+#             */
/*   Updated: 2025/11/10 18:02:15 by amguinam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

