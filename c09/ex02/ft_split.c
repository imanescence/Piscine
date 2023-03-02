/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:21:11 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/03/02 20:16:10 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	char_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_char_count(char *str, char *charset)
{
	int	i;

	i = 0;
	while (char_is_sep(*str, charset) == 0)
	{
			i++;
			str++;
	}
	return (i);
}

int	ft_wd_count(char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (((char_is_sep(str[i], charset) == 1
					&& char_is_sep(str[i + 1], charset) == 0))
			|| (char_is_sep(str[0], charset) == 0))
		{
			j = j + 1;
		}
		i++;
	}
	return (j);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**tab;

	while (char_is_sep(*str, charset) == 1)
		str++;
	tab = malloc(sizeof(char *) * ft_wd_count(str, charset) + 1);
	if (tab == NULL)
		return (NULL);
	i = -1;
	while (++i < ft_wd_count(str, charset))
	{
		j = 0;
		tab[i] = malloc(sizeof(char) * ft_char_count(str, charset) + 1);
		if (tab[i] == NULL)
			return (NULL);
		while (char_is_sep(*str, charset) == 0 && *str)
			tab[i][j++] = *str++;
		tab[i][j] = '\0';
		while (char_is_sep(*str, charset) == 1)
			str++;
	}
	tab[i] = NULL;
	return (tab);
}
/*#include <stdio.h>
int main(int argc, char **argv)
{
	
	(void)argc;
	char *sep = "x";
	char **tab;
	tab = ft_split(argv[1], sep);
	for(int i = 0; i < 3; i++)
		printf("%s\n", tab[i]);
	printf("%s\n", tab[3]);
}*/
