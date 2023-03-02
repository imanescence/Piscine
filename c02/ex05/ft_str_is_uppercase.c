/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:00:47 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/19 12:16:02 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 'Z' || str[i] < 'A')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int main()
{
	char str[] = "OUFW";
	printf("%d", ft_str_is_uppercase(str));
}*/
