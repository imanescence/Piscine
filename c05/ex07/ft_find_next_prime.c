/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:55:15 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/28 00:35:25 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb > 2)
	{
		while (i <= nb / i)
		{
			if (nb % i == 0)
				return (0);
		i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) == 0)
	{
		nb++;
		if (ft_is_prime(nb) == 1)
			return (nb);
	}
	return (nb);
}
/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_find_next_prime(-215));
}*/
