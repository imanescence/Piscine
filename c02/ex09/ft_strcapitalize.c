/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:22:34 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/21 19:45:31 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_supercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_supercase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= '/')
			|| (str[i] >= ':' && str[i] <= '@')
			|| (str[i] >= '[' && str[i] <= '`')
			|| (str[i] >= '{' && str[i] <= '~'))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			i--;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int main()
	{
		char str[100] = "COUCOU tO;ut le monde 2main on+recOmmence !?ouiii\0";
		printf("|%s|\n", ft_strcapitalize(str));
		return (0);
	}*/
