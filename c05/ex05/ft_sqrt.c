/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:48:14 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/28 00:43:25 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i != nb && i < nb / i)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}
/*#include <stdio.h>
int main()
{
	int nb = 2147483647;
	printf("%d", ft_sqrt(nb));
}*/
