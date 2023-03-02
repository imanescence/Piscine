/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:54:02 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/19 18:54:35 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - 32;
		}
			x++;
	}
	return (str);
}

/*#include <stdio.h>
int main()
{
	char str[100] = "sffishfi5wgazAZ";
	printf("%s", ft_strupcase(str));
}*/
