/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:18:30 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/27 20:59:12 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>
int main()
{
	int nb = 2;
	int power = 10;
	printf("%d", ft_recursive_power(nb, power));
}*/			
