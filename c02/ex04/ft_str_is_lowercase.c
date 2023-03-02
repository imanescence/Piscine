/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:58:25 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/19 18:52:35 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 'z' || str[i] < 'a')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int main()
{
	char str[] = "";
	printf("%d", ft_str_is_lowcase(str));
}*/
