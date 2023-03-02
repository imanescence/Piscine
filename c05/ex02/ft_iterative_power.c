/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:49:40 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/27 17:05:16 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	rslt;

	i = 0;
	rslt = 1;
	if (power == 0 || nb == 1)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		rslt = rslt * nb;
		i++;
	}
	return (rslt);
}
/*#include <stdio.h>
int main()
{
	int nb = 0;
	int power = 10000;
	printf("%d\n", ft_iterative_power(nb, power));

}*/
