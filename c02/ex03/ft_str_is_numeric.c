/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:56:44 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/19 12:12:21 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= '/') || (str[i] > ':'))
			return (0);
			i++;
	}
	return (1);
}

/*#include <stdio.h>
int main()
{
	char str[] = "123456789";
	printf("%d", ft_str_is_numeric(str));
}*/
