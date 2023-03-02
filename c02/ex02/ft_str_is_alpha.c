/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_aplha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:33:23 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/19 12:08:46 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'z')
			|| (str[i] <= '`' && str[i] >= '['))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int main()
{
	char str[] = &((char) 128);
	printf("%d", ft_str_is_alpha(str));
}*/
