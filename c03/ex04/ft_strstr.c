/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:16:55 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/03/02 10:44:58 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find || to_find[0] == '\0')
		return (str);
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		j = 0;
		i++;
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>
int main()
{
	char str[100] = "test";
	char *to_find;
   	to_find	= "l";
   printf("%s\n", strstr(str, to_find));
	printf("%s", ft_strstr(str, to_find));
}*/
