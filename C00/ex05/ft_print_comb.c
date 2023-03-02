/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:37:05 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/11 00:37:34 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	test_comb(int x, int y, int z)
{
	char	w;

	w = '0' + x;
	write(1, &w, 1);
	w = '0' + y;
	write(1, &w, 1);
	w = '0' + z;
	write(1, &w, 1);
	if (!(x == 7 && y == 8 && z == 9))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				test_comb(a, b, c);
				c++;
			}
		b++;
		}
	a++;
	}
}
