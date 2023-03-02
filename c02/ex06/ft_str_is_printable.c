/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:02:48 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/19 12:16:41 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > '~' || str[i] < ' ')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdlib.h>
#include <stdio.h>
int main()
{
	char *str;

	str = malloc(100);
	str[1] = 127;
	printf("%d", ft_str_is_printable(str));
}*/
