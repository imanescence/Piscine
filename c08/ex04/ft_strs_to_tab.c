/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 03:13:02 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/03/01 21:01:48 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tabstr;
	int			i;

	i = 0;
	tabstr = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (tabstr == NULL)
		return (NULL);
	while (i < ac)
	{
		tabstr[i].size = ft_strlen(av[i]);
		tabstr[i].str = av[i];
		tabstr[i].copy = ft_strdup(av[i]);
		i++;
	}
	tabstr[i].str = 0;
	return (tabstr);
}
